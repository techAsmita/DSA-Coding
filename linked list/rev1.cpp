#include<iostream>//singly linked list
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
        int value=data;
        while(next!=NULL)
        {
            delete next;
            next=NULL;
        }
        cout<<"Memory is free with node at: "<<value<<endl;
    }
};
void insertathead(node* &head, int e1)
{
    node *temp=new node(e1);
    temp->next=head;
    head=temp;
}
void insertattail(node* &tail, int e2)
{
    node *temp=new node(e2);
    tail->next=temp;
    tail=temp;
}
void insertatpos(node* &head, node* &tail, int pos, int e3)
{
    if(pos==1)
    {
        insertathead(head,e3);
        return;
    }
    node *newnode=new node(e3);
    node *temp=head;
    int count=1;
    while(count<pos-1)
    {
        temp=temp->next;
        count++;
    }
    newnode->next=temp->next;
    temp->next=newnode;
    if(temp==NULL)
    {
        insertattail(tail,e3);
        return;
    }
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
void deleteatbeg(int pos, node* &head)
{
    if(pos==1)
    {
        node *temp=head;
        head=head->next;
        temp->next=NULL;
        delete temp;
    }
}
void deleteatspecificend(int pos, node* &head)
{
    node *curr=head;
    node *prev=NULL;
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
void search(node* &head, int element)
{
    node *temp=head;
    while(temp!=NULL)
    {
        if(temp->data==element)
        {
            cout<<"element found"<<endl;
            return;
        }
    
    temp=temp->next;
    }
    cout<<"element not found"<<endl;
}
int main()
{
    int n;
    node *n1=new node(10);
    node *head=n1;
    node *tail=n1;
    do
    {
        cout<<"******MENU******\n";
        cout<<"Enter your choice: ";
        cin>>n;
        switch(n)
        {
            case 1:
            insertathead(head,20);
            insertathead(head,30);
            display(head);
            break;
            case 2:
            insertattail(tail,40);
            insertattail(tail,20);
            display(head);
            break;
            case 3:
            insertatpos(head,tail,3,100);
            display(head);
            break;
            case 4:
            display(head);
            break;
            case 5:
            deleteatbeg(1,head);
            display(head);
            break;
            case 6:
            deleteatspecificend(2,head);
            //deleteatspecificend(3,head);
            display(head);
            break;
            case 7:
            search(head,30);
            break;
            case 8:
            cout<<"exiting program"<<endl;
            break;
            default:
            cout<<"wrong choice"<<endl;

        }
    } while (n!=8);
    
}