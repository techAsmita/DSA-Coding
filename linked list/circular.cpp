#include<iostream>//insertion and deletion in cll.
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
    ~node()
    {
        int val=data;
        if(next!=NULL)
        {
            delete next;
            next=NULL;
        }
        cout<<"memory is free with: "<<val<<endl;
    }
};
void insertnode(node* &tail, int element, int d1)
{
    //first case element present in the list
    if(tail==NULL)//empty list
    {
        node *newnode=new node(d1);
        tail=newnode;
        newnode->next=newnode;
    }
    else
    {
        //non-empty list
        node *current=tail;
        while(current->data!=element)
        {
            current=current->next;
        }
        //element found.
        node *temp=new node(d1);
        temp->next=current->next;
        current->next=temp;
    }
}
void print(node* &tail)
{
    node*temp=tail;
    if(tail==NULL)
    {
        cout<<"list is empty"<<endl;
        return;
    }
    do
    {
        cout<<tail->data<<" ";
        tail=tail->next;
    } while (tail!=temp);
    cout<<endl;
}
void deletenode(node* &tail, int element)
{
    //empty linked list
    if(tail==NULL)
    {
        cout<<"list is empty"<<endl;
        return;
    }
    else
    {
        node *prev=tail;
        node *current=prev->next;
        while(current->data!=element)
        {
            prev =current;
            current=current->next;
        }
        prev->next=current->next;
        if(current==prev)//1 node linked list.
        {
            tail=NULL;
        }
        else if(tail==current)//>=2 node linked list
        {
            tail=prev;
        }
        current->next=NULL;
        delete current;
    }
}
int main()
{
    node *tail=NULL;
    //empty cll.
    insertnode(tail,5,3);
    print(tail);
    insertnode(tail,3,5);
    print(tail);
    // insertnode(tail,5,7);
    // print(tail);
    // insertnode(tail,3,2);
    // print(tail);
    // insertnode(tail,7,4);
    // print(tail);
    // insertnode(tail,5,10);
    // print(tail);
    deletenode(tail,5);
    print(tail);
}