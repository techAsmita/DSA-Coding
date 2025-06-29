#include<iostream>//how to create a NODE
using namespace std;
class node 
{
    public:
    int data;
    node *next;
    public:
    node(int val)
    {
        data=val;
        next=NULL;
    }

};
int main()
{
    node *newnode=new node(10);
    cout<<newnode->data<<endl;
    cout<<newnode->next<<endl;
}

