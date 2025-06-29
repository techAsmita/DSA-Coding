//polynomials
#include<iostream>
using namespace std;
class node
{
    public:
    int coeff;
    int pow;
    node *next;
    node(int c, int p)
    {
        coeff=c;
        pow=p;
        next=NULL;
    }
};
node* polynom(node* &head1, node* &head2)
{
    if(!head1)
    return head2;
    if(!head2)
    return head1;
    if(head1->pow<head2->pow)
    {
        node *p=polynom(head1,head2->next);
        head2->next=p;
        return head2;
    }
    else if(head1->pow>head2->pow)
    {
        node *p=polynom(head1->next,head2);
        head1->next=p;
        return head1;
    }
    else
    {
        node *p = polynom(head1->next,head2->next);
        head1->coeff+=head2->coeff;
        head1->next=p;
        return head1;
    }
}
void print(node* &head)
{
    node *temp=head;
    while(temp!=NULL)
    {
        cout<<temp->coeff<<" "<<temp->pow<<endl;
        temp=temp->next;
    }
    //cout<<endl;
}
int main()
{
    node *p1=new node(5,2);
    p1->next=new node(4,1);
    p1->next->next=new node(2,0);

    node *p2=new node(4,2);
    p2->next=new node(-2,1);
    p2->next->next=new node(1,0);

    node *head=polynom(p1,p2);
    print(head);

    
}