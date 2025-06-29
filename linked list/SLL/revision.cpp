#include<iostream>
using namespace std;
class node
{
    public:
    int data;
    node *next;
    node(int d)
    {
        this->data=d;
        this->next=NULL;
    }
    ~node()
    {
        int value=this->data;
        if(this->next!=NULL)
        {
            delete next;
            this->next=NULL;
        }
        cout<<"The memory is free with: "<<value<<endl;
    }
};
void insertathead(node* &head, int d)//used reference
{
    //create new node
    node *temp=new node(d);
    temp->next=head;
    head=temp;
}
void insertattail(node* &tail,int d)
{
    //new node create
    node *temp=new node(d);
    tail->next=temp;
    tail=tail->next;
}
void insertatpos(node* &tail,node* &head, int pos, int d)
{
    //for insertion at beginning
    if(pos==1)
    {
        insertathead(head,d);
        return;
    }
    //insert at end
    node *temp=head;//starting node
    int count=1;
    while(count<pos-1)
    {
        temp=temp->next;
        count++;
    }
    if(temp->next==NULL)
    {
        insertattail(tail,d);
        return;
    }
    //new node create for insertion of element.
    node *insertnode=new node(d);
    insertnode->next=temp->next;
    temp->next=insertnode;
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
void deletenode(int pos,node* &head)
{
    if(pos==1)
    {
        node *temp=head;
        head=head->next;
        //memory free
        temp->next=NULL;
        delete temp;
    }
    else
    {
        //delete middle or last node
        node *curr=head;
        node *prev=NULL;
        int count=1;
        while(count<pos)
        {
            prev=curr;
            curr=curr->next;
            count++;
        }
        if(curr->next==NULL)//if curr is the last node.
        {
            prev->next=NULL;
        }
        else
        {
            prev->next=curr->next;
        }
        curr->next=NULL;
        delete curr;

    }
}
int main()
{
    node *node1=new node(10);
    // cout<<node1->data<<endl;
    // cout<<node1->next<<endl; //traversal code.
    //node pointed to head.
    node *head=node1;
    node *tail=node1;
    insertatpos(tail,head,1,90);
    insertatpos(tail,head,2,20);
    insertatpos(tail,head,4,100);
    print(head);
}