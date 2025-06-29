#include<iostream>
using namespace std;
class node
{
    public:
    int data;
    node *next;
    node(int val)
    {
        data=val;
        next=NULL;
    }
};
node *concat(node* &head1, node* &head2)
{
    if(!head1)
    return head2;
    if(!head2)
    return head1;
    node *temp=head1;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=head2;
    return head1;
}
void print(node* &head)
{
    node *temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
int main()
{
    node *head1=new node(16);
    node *head2=new node(15);
    head2->next=new node(10);
    print(head1);
    node *c=concat(head1,head2);
    print(c);
}