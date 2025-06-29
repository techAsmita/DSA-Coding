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
node *rec(node* &head)
{
    if(head==NULL||head->next==NULL)
    {
        return head;
    }
    else
    {
        node *r=rec(head->next);
        head->next->next=head;
        head->next=NULL;
    return r;}
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
    node *head1=new node(10);
    head1->next=new node(40);
    head1->next->next=new node(100);
    print(head1);
    node *rp=rec(head1);
    print(rp);

}