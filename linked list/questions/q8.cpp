//union and intersection
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
node* intersection(node* &head1, node* &head2)
{
    while(head2!=NULL)
    {
        node *temp=head1;
        while(temp)
        {
            if(temp==head2)
            {
                return head2;
                
            }
        temp=temp->next;
        }
        head2=head2->next;
    }
    return NULL;//no intersection.
}
int main()
{
    node *head1=new node(10);
    head1->next=new node(2);
    head1->next->next=new node(2);

    node *head2=new node(9);
    head2->next=new node(2);
    head2->next->next=new node(10);

    node *common=new node(30);
    head1->next->next->next=common;
    head2->next->next->next=common;
    node *i=intersection(head1,head2);
    if(i==NULL)
    {
        cout<<"no intersection point"<<endl;
    }
    else
    cout<<"intersection part is: "<<i->data<<endl;

}
