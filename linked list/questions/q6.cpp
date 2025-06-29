//sorting using bubble sort
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
void insertatstart(node* &head, int d)
{
    node *temp=new node(d);
    temp->next=head;
    head=temp;
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
void bubblesort(node* &head)
{
    // int len=0;
    // node *temp=head;
    if(head==NULL)
    {
        cout<<"list is empty"<<endl;
    }
    bool swapped;
    node *temp;
    do
    {
        swapped=false;
        temp=head;
        while(temp->next!=NULL)
        {if(temp->data>temp->next->data)
        {
            int t=temp->data;
            temp->data=temp->next->data;
            temp->next->data=t;
            swapped=true;
        }
    temp=temp->next;
        }
    } while (swapped);
    
    
    cout<<endl;

}
int main()
{
    node *newnode=new node(1);
    node *head=newnode;
    insertatstart(head,20);
    insertatstart(head,50);
    insertatstart(head,10);
    insertatstart(head,30);
    print(head);
    bubblesort(head);
    print(head);
}