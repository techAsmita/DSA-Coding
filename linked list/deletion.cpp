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
        int v=data;
        if(next!=NULL)
        {
            delete next;
            next=NULL;
        }
        cout<<"Memory is free with data: "<<v<<endl;
    }
    
};
void insertatbeg(node* &head, int d1)
{
    node *temp=new node(d1);
    temp->next=head;
    head=temp;

}
void deletenode(int position, node* &head)
{
    if(position==1)//deletion of first node.
    {
        node *temp=head;
        head=head->next;
        temp->next=NULL;
        delete temp;//to free the memory;
    }
    else//deletion of any node or last.
    {
        node *current=head;
        node *prev=NULL;//as before head is LAST NODE WHICH IS NULL.
        int count=1;
        while(count<position)
        {
            prev=current;
            current=current->next;
            count++;
        }
        prev->next=current->next;
        current->next=NULL;
        delete current;
    }
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
    node *newnode=new node(20);
    //cout<<newnode->data<<endl;

    node *head=newnode;
    node *tail=newnode;
    //print(head);
    insertatbeg(head,10);
    insertatbeg(head,15);
    insertatbeg(head,20);
    insertatbeg(head,30);
    print(head);
    deletenode(1,head);
    print(head);
    cout<<"head is:"<<head->data<<endl;
    cout<<"tail is:"<<tail->data<<endl;

}