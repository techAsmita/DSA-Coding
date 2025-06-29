//to print the linked list from the end using recursion in circular linked list.
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
void insert(node* &tail,int element, int d1)
{
    if(tail==NULL)//no element case
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
    if(tail==NULL)
    {
        cout<<"list empty"<<endl;
        return;
    }
    node *temp=tail;
    do
    {
        cout<<tail->data<<" ";
        tail=tail->next;
    } while (tail!=temp);
    cout<<endl;
    
}
node* reverse(node* &tail)
{
    if(tail==NULL||tail->next==NULL)
    {
        cout<<"list empty"<<endl;
        return tail;
    }
    node *prev=NULL;
    node *curr=tail->next;
    node* next = NULL;
    node* head = tail->next;
    do {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    } while (curr!=head);
    head->next = prev;
    tail->next = prev;
    return tail;

}
int main()
{
    node *tail=NULL;
    insert(tail,5,3);
    insert(tail,3,5);
    insert(tail,3,9);
    insert(tail,3,10);
    print(tail);
    tail=reverse(tail);
    print(tail);

}