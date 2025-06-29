#include<iostream>//insertion codes
using namespace std;
class node
{
    public:
    int data;
    node *next;
    node *prev;
    //create constructor
    node(int data)
    {
        this->data=data;
        this->next=NULL;
        this->prev=NULL;
    }
    ~node()
    {
        int val=this->data;
        if(this->next!=NULL)
        {
            delete next;
            next=NULL;
        }
        cout<<"Memory is free with: "<<val<<endl;
    }
};
void insertathead(node* &head,node* &tail, int d)
{
    //if linked list is already empty
    if(head==NULL)
    {
        node *temp=new node(d);
        head=temp;
        tail=temp;
    }
    else
    {//create a new node
    node *temp=new node(d);
    temp->next=head;
    head->prev=temp;
    head=temp;
    }
}
void insertattail(node* &tail,node* &head, int d)
{
    if(tail==NULL)//empty linked list.
    {
        node *temp=new node(d);
        tail=temp;
        head=temp;
    }
    //create node
    node *temp=new node(d);
    tail->next=temp;
    temp->prev=tail;
    tail=temp;
}
void insertatpos(node* &tail,node* &head, int pos, int d)
{
    if(pos==1)
    {
        insertathead(head,tail,d);
        return;
    }
    node *temp=head;
    int count=1;
    if(temp->next==NULL)
    {
        insertattail(tail,head,d);
        return;
    }
    while(count<pos-1)
    {
        temp=temp->next;
        count++;
    }
    //insert of node so create that node
    node *nodetoinsert=new node(d);
    nodetoinsert->next=temp->next;
    temp->next->prev=nodetoinsert;
    temp->next=nodetoinsert;
    nodetoinsert->prev=temp;
    
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
void deletenode(int pos, node* &head)
{
    if(pos==1)
    {
        node *temp=head;
        temp->next->prev=NULL;
        head=temp->next;
        temp->next=NULL;
        delete temp;
    }
    else
    {
        node *curr=head;
        node *prev=NULL;
        int count=1;
        if(count<pos)
        {
            prev=curr;
            curr=curr->next;
            count++;
        }
        curr->prev=NULL;
        prev->next=curr->next;
        curr->next=NULL;
        delete curr;
    }
}
int main()
{
    node *node1= new node(5);
    node *head=node1;
    node *tail=node1;
    // insertathead(head,tail,10);
    // insertathead(head,tail,20);
    insertattail(tail,head,15);
    print(head);
    cout<<"Head"<<head->data<<endl;
    cout<<"Tail"<<tail->data<<endl;
    insertattail(tail,head,10);
    print(head);
    cout<<"Head"<<head->data<<endl;
    cout<<"Tail"<<tail->data<<endl;
    insertattail(tail,head,20);
    print(head);
    cout<<"Head"<<head->data<<endl;
    cout<<"Tail"<<tail->data<<endl;
    insertatpos(tail,head,2,90);
    print(head);
    cout<<"Head"<<head->data<<endl;
    cout<<"Tail"<<tail->data<<endl;
    deletenode(5,head);
    print(head);
    cout<<"Head "<<head->data<<endl;
    cout<<"Tail "<<tail->data<<endl;
}