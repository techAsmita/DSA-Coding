//to merge two sorted list
#include<iostream>
using namespace std;
class node
{
    public:
    int data;
    node *next;
    node(int value)
    {
        data=value;
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
node* merge(node* &head, node* &head2) 
{
    if (!head) return head2;
    if (!head2) return head;
    node* mergedHead = NULL;
    if (head->data <= head2->data) 
    {
        mergedHead = head;
        mergedHead->next = merge(head->next, head2);
    } 
    else
    {
        mergedHead = head2;
        mergedHead->next = merge(head, head2->next);
    }
    return mergedHead;
}
int main()
{
    node *n1=new node(16);
    node *head=n1;
    node *head2=new node(15);
    insertathead(head,13);
    insertathead(head,12);
    insertathead(head,2);
    insertathead(head,1);
    secondinsert(head2,14);
    secondinsert(head2,7);
    secondinsert(head2,5);
    print(head);
    print2(head2);

    node *mergedhead=merge(head,head2);
    print(mergedhead);
    //cout<<mergedhead->data<<" ";
}