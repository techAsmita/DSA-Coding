#include<iostream>//to find the middle element
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
void insertathead(node* &head, int d)
{
    node *temp=new node(d);
    temp->next=head;
    head=temp;
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
int getlength(node* &head)
{
    int len=0;
    node *temp=head;//uses a temp pointer.
    while(temp!=NULL)
    {
        len++;
        temp=temp->next;
    }
    return len;
}
node *findmiddle(node* &head)
{
    int length=getlength(head);
    int ans=length/2;

    node *temp=head;
    int cnt=0;
    while(cnt<ans)
    {
        temp=temp->next;
        cnt++;
    }
    return temp;
}
int main()
{
    node *node1=new node(10);

    node *head=node1;
    //node *tail=node1;
    insertathead(head,12);
    insertathead(head,15);
    insertathead(head,20);
    insertathead(head,100);
    print(head);
    node *middle=findmiddle(head);
    if(middle!=NULL)
    {
        cout<<"middle element is: "<<middle->data<<endl;
    }
    // cout<<"head: "<<head->data<<endl;
    // cout<<"tail: "<<tail->data<<endl;
}