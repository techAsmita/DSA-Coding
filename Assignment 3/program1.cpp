#include<iostream>
#define MAX 8
using namespace std;
class stack1
{
    int stk[MAX];
    int top;
    public:
    stack1()
    {
        top=-1;
    }
    void push(int element)
    {
        if(top>=MAX-1)
        {
            cout<<"Stack overflow"<<endl;
        }
        else
        {
            top++;
            stk[top]=element;
            cout<<"Pushed element: "<<element<<" into the stack"<<endl;
        }
    }
    void pop()
    {
        if(top<0)
        {
            cout<<"Stack underflow"<<endl;
        }
        else
        {
            cout<<"Popped element is: "<<stk[top]<<endl;
            top--;
        }
    }
    bool isfull()
    {
        if(top>=MAX-1)
        {
            return "Overflow";
        }
    }
    bool isempty()
    {
        if(top<0)
        {
            return -1;
        }
    }
    int peek()
    {
        return stk[top];
    }
    void display()
    {
        if(top<0)
        {
            cout<<"underflow"<<endl;
        }
        else
        {
            for(int i=top;i>=0;i--)
            {
                cout<<stk[i]<<" "<<endl;
            }
        }
    }

};
int main()
{
    stack1 s;
    int choice;
    do
    {
        cout<<"********MENU********\n";
        cout<<"1) Push()"<<endl<<"2) Pop()"<<endl<<"3) isempty()"<<endl<<"4) isfull()"<<endl<<"5) peek()"<<endl<<"6) display()"<<endl;
        cout<<"Enter your choice: ";
        cin>>choice;
        switch(choice)
    {
        case 1:
        s.push(10);
        s.push(20);
        s.push(30);
        s.push(40);
        s.push(50);
        break;

        case 2:
        s.pop();
        s.pop();
        break;

        case 3:
        cout<<s.isfull()<<endl; 
        break;
        
        case 4:
        cout<<s.isempty()<<endl; 
        break;
        
        case 5:
        cout<<"Top element is: "<<s.peek()<<endl;
        break;
        
        case 6:
        cout<<"Stack elements are: "<<endl;
        s.display();
        break;

        case 7:
        cout<<"exiting program"<<endl;
        break;
        
        default:
        cout<<"Wrong choice try again"<<endl;
    }

    } while(choice!=7);
}