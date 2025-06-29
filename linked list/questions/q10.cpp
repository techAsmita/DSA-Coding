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
    ~node()
    {
        int value=data;
        while(next!=NULL)
        {
            delete next;
            next=NULL;
        }
        cout<<"memory is free with value: "<<value<<endl;
    }
};
void insertathead(node* &head,int d1)
{
    node *temp=new node(d1);
    temp->next=head;
    head=temp;
}
void display(node* &head)
{
    node *t=head;
    while(t!=NULL)
    {
        cout<<t->data<<" ";
        t=t->next;
    }
    cout<<endl;
}
void deletenode(int pos, node* &head)
{
    if(pos==1)
    {
        node *temp=head;
        head=head->next;
        temp->next=NULL;
        delete temp;
    }
    else
    {
        node *prev=NULL;
        node *curr=head;
        int count=1;
        while(count<pos)
        {
            prev=curr;
            curr=curr->next;
            count++;
        }
        prev->next=curr->next;
        curr->next=NULL;
        delete curr;
    }
}
int main()
{
    node *n1=new node(99);//2, 5, 8, 19, 22, 29, 33, 50, 55, 79, 87, 99
    node *head=n1;
    insertathead(head,87);
    insertathead(head,79);
    insertathead(head,55);
    insertathead(head,50);
    insertathead(head,33);
    insertathead(head,29);
    insertathead(head,22);
    insertathead(head,19);
    insertathead(head,8);
    insertathead(head,5);
    insertathead(head,2);
    display(head);
    insertathead(head,28);
    display(head);
    deletenode(8,head);
    display(head);

}
