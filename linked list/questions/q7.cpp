#include<iostream>//joining two linked lists.
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
void insertathead(node* &head, int d)
{
    node *temp=new node(d);
    temp->next=head;
    head=temp;
}
void secondinsert(node* &head2, int d2)
{
    node *temp2=new node(d2);
    temp2->next=head2;
    head2=temp2;
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
void print2(node* &head2)
{
    node *temp2=head2;
    while(temp2!=NULL)
    {
        cout<<temp2->data<<" ";
        temp2=temp2->next;
    }
    cout<<endl;
}
node* concat(node* &head, node* &head2)
{
    if(!head)
    return head2;
    if(!head2)
    return head;
    node *temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=head2;
    return head;
}
int main()
{
    node *n1=new node(16);
    node *head=n1;
    node *head2=new node(15);
    insertathead(head,13);
    insertathead(head,20);
    insertathead(head,2);
    secondinsert(head2,10);
    secondinsert(head2,7);
    secondinsert(head2,50);
    print(head);
    print2(head2);
    node *c=concat(head,head2);
    print(c);
}