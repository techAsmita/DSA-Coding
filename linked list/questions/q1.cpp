//reverse a linked list
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
void inserthead(node* &head, int d1)
{
    node *temp=new node(d1);
    temp->next=head;
    head=temp;
}
void print(node* &head)
{
    node*temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
//without recursion.
// node* reverse(node* &head)
// {
//     if(head==NULL||head->next==NULL)
//     {
//         return head;
//     }
//     node *prev=NULL;
//     node *curr=head;
//     while(curr!=NULL)
//     {
//         node *forward=curr->next;
//         curr->next=prev;
//         prev=curr;
//         curr=forward;
//     }
//     return prev;
// }

//with resursion
node* reverserec(node* &head)
{
    if(head==NULL||head->next==NULL)
    {
        return head;
    }
    node *r=reverserec(head->next);
    head->next->next=head;
    head->next=NULL;
    return r;
}
int main()
{
    node *n1=new node(10);
    node* head=n1;
    //print(head);
    inserthead(head,20);
    inserthead(head,30);
    inserthead(head,40);
    inserthead(head,80);
    print(head);
    //head=reverse(head);//update head pointer.
    head=reverserec(head);
    print(head);

}