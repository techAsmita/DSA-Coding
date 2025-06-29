#include<iostream>
using namespace std;
class node
{
    public:
    int data;
    node *next;
    node(int v)
    {
        data=v;
        next=NULL;
    }
};
void swapped(node* &head1)
{
    if(head1==NULL)
    {
        cout<<"list is empty"<<endl;
    }
    
    node *temp;
    bool swapped;
        do
        {
            swapped=false;
            temp=head1;
            while(temp->next!=NULL)
        {
            if(temp->data>temp->next->data)
            {
                int temp1=temp->data;
                temp->data=temp->data;
                temp->next->data=temp1;
                swapped=true;
            }
        temp=temp->next;
        }
        } while(swapped);
}
void display(node* &head1)
{
    node *temp=head1;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
int main()
{
    node *head1=new node(10);
    head1->next=new node(50);
    head1->next->next=new node(20);
    display(head1);
    swapped(head1);
    display(head1);
}