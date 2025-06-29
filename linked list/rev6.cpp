//circular list
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
    ~node()
    {
        int val=data;
        while(next!=NULL)
        {
            delete next;
            next=NULL;
        }
    cout<<"Memory is free with: "<<val<<endl;

    }
};
void insertatbeg(node* &tail, int element, int d1)
{
    if(tail==NULL)
    {
        node *newnode=new node(d1);
        tail=newnode;
        newnode->next=newnode;
    }
    else
    {
        node *current=tail;
        while(current->data!=element)
        {
            current=current->next;
        }
        node *temp=new node(d1);
        temp->next=current->next;
        current->next=temp;

    }
}
void print(node* &tail)
{
    node *temp=tail;
    do
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    } while (tail!=temp);
    
}
void deletion(node* &tail, int element)
{
    if(tail==NULL)
    {
        cout<<"list is empty"<<endl;
    }
    else
    {
        node *prev=tail;
        node *curr=prev->next;
        while(curr->data!=element)
        {
            prev=curr;
            curr=curr->next;
        }
        prev->next=curr->next;
        if(curr==prev)
        {
            tail=NULL;
        }
        else if(tail==curr)
        {
            tail=prev;
        }
        curr->next=NULL;
        delete curr;

    }
}
int main()
{
    node *tail=NULL;
    // tail->next=new node(20);
    insertatbeg(tail,3,90);
    insertatbeg(tail,2,9);
    print(tail);
}