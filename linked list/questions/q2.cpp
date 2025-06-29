//searching an element in linked list
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
void insertathead(node* &head, int d)
{
    node *temp=new node(d);
    temp->next=head;
    head=temp;
}
void insertatpos(node* &head, int pos, int d2)
{
    int count=1;
    node *temp=head;
    if(pos==1)
    {
        insertathead(head,d2);
        return;
    }
    node *nodetoinsert=new node(d2);
     while(count<pos-1)
    {
        temp=temp->next;
        count++;
    }
    nodetoinsert->next=temp->next;
    temp->next=nodetoinsert;
}
void print(node* head)//traverse
{
    node *temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
bool search(node* &head, int x)
{
    node *curr=head;
    while(curr!=NULL)
    {
        if(curr->data==x)
        {
            return true;
            
        }
    curr=curr->next;
    }
    return false;
}
int main()
{
    node *n1=new node(10);
    node *head=n1;
    insertathead(head,20);
    //print(head);
    insertatpos(head,1,100);
    print(head);
    if(search(head,13))
    {
        cout<<"element found"<<endl;
    }
    else
    {
        cout<<"element not found"<<endl;
    }
}