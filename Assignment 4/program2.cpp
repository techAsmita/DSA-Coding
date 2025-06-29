#include<iostream>
#define MAX 6
using namespace std;
class queue2
{
    int front,rear;
    int q1[MAX];
    public:
    queue2()
    {
        front=rear=-1;
    }
    void enqueue(int element)
    {
        if((rear+1)%MAX==front)
        {
            cout<<"Overflow condition"<<endl;
        }
        else if(front==-1&&rear==-1)
        {
            front=rear=0;
            q1[rear]=element;
            cout<<"The element inserted is: "<<element<<endl;
        }
        else
        {
            rear=(rear+1)%MAX;
            q1[rear]=element;
            cout<<"The element inserted is: "<<element<<endl;
        }
    }
    void dequeue()
    {
        if(front==-1&&rear==-1)
        {
            cout<<"Underflow condition"<<endl;
        }
        else if(front==rear)
        {
            front=rear=-1;
        }
        else
        {
            cout<<"The element removed is: "<<q1[front]<<endl;
            front=(front+1)%MAX;
        }
    }
    bool isempty()
    {
        if(front==-1&&rear==-1)
        {
            return "Underflow";
        }
    }
    bool isfull()
    {
        return (rear+1)%MAX==front;
    }
    int peek()
    {
        return q1[front];
    }
    void display()
    {
        if(front==-1&&rear==-1)
        {
            cout<<"Empty queue"<<endl;
        }
        else
        {
            for(int i=front;i<6;i++)
            {
                cout<<q1[i]<<" ";
            }
        }
    }
};
int main()
{
    queue2 queue1;
    int choice;
    do
    {
        cout<<"******MENU******\n";
        cout<<"1. enqueue()"<<endl<<"2. dequeue()"<<endl<<"3. isempty()"<<endl<<"4. isfull()"<<endl<<"5. peek()"<<endl<<"6. display()"<<endl;
        cout<<"Enter your choice: ";
        cin>>choice;
        switch(choice)
        {
            case 1:
            queue1.enqueue(100);
            queue1.enqueue(16);
            queue1.enqueue(4);
            queue1.enqueue(102);
            queue1.enqueue(18);
            queue1.enqueue(-2);
            break;

            case 2:
            queue1.dequeue();
            queue1.dequeue();
            break;

            case 3:
            queue1.isempty();
            break;

            case 4:
            queue1.isfull();
            break;

            case 5:
            cout<<"The front element is: "<<queue1.peek()<<endl;
            break;

            case 6:
            queue1.display();
            break;

            case 7:
            cout<<"exiting menu"<<endl;
        }
    } while (choice!=7);
    
}