#include<iostream>
using namespace std;
class node
{
    public:
    int data;
    node *next;
    node(int v)
    {
        data=v;
        next=NULL;
    }
};
node *merge(node* &head1, node* &head2)
{
    if(!head1)
    return head2;
    if(!head2)
    return head1;
    node *mergehead=NULL;
    if (head1->data<=head2->data)
    {
        mergehead=head1;
        mergehead=merge(head1->next,head2);
    }
    else
    {
        mergehead=head2;
        mergehead=merge(head1,head2->next);
    }
    return mergehead;
}
void display(node* &head1)
{
    node *temp=head1;
    cout<<"Merge list is: "<<endl;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
void display2(node* &head2)
{
    node *temp=head2;
    cout<<"Merge list is: "<<endl;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
int main()
{
    node *head1=new node(10);
    head1->next=new node(12);
    head1->next->next=new node(13);
    display(head1);
    node *head2=new node(1);
    head2->next=new node(2);
    head2->next->next=new node(3);
    display2(head2);

    node *mergehead=merge(head1,head2);
    display(mergehead);
}