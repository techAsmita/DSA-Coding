#include<iostream>//insertion in singlylinked list
using namespace std;
class node
{
    public:
    int data;
    node *next;
    //constructor call
    node(int value)
    {
        data=value;
        next=NULL;
    }
};
void insertathead(node* &head, int d)
{
    node *temp=new node(d);
    temp->next=head;
    head=temp;
}
void insertattail(node* &tail, int d2)//insertion at end
{
    node *temp=new node(d2);
    tail->next=temp;
    tail=temp;
}
void insertatspecific(node* &head,node* &tail, int pos, int d3)//nth node traverse till n-1 pos
{
    if(pos==1)//special case if we want to insert at first.
    {
        insertathead(head,d3);
        return;
    }
    node *nodetoinsert=new node(d3);
    node *temp=head;
    int count=1;
    while(count<pos-1)
    {
        temp=temp->next;
        count++;
    }
    //insertion at last
    if(temp->next==NULL)
    {
        insertattail(tail,d3);
        return;
    }
    nodetoinsert->next=temp->next;
    temp->next=nodetoinsert;

}
void print(node* &head)//traversing list
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
    node *node1=new node(10);

    node *head=node1;
    node *tail=node1;
    print(head);
    insertattail(tail,12);
    insertattail(tail,15);
    insertatspecific(head,tail,1,22);
    print(head);
    cout<<"head: "<<head->data<<endl;
    cout<<"tail: "<<tail->data<<endl;
}