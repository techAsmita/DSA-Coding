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
void insert(node* &head, int pos, int d2)
{
    node *newinsert=new node(d2);
    node *temp=head;
    int count=1;
    while(count<pos-1)
    {
        temp=temp->next;
        count++;
    }
    newinsert->next=temp->next;
    temp->next=newinsert;
}
void insertatend(node* &tail, int d1)
{
    node *temp=new node(d1);
    tail->next=temp;
    tail=temp;
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
    node *new1=new node(10);
    node *head=new1;
    node *tail=new1;
    //print(head);
    insertatend(tail,20);
    insertatend(tail,30);
    insertatend(tail,40);
    insertatend(tail,50);
    print(head);
    insert(head,3,25);
    print(head);

}