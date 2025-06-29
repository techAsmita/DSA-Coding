#include<iostream>
using namespace std;
void create()
{
    int arr[5];
    cout<<"Enter your array: "<<endl;
    for(int i=0;i<5;i++)
    {
        cin>>arr[i];
    }
}
int display(int arr[])
{
    cout<<"Your array is: "<<endl;
    for(int i=0;i<5;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
int insert(int arr[])
{
    int pos=3;
    int num=90;
    for(int i=6;i>=pos;i--)
    {
        arr[i]=arr[i-1];
    }
    arr[pos-1]=num;
    for(int i=0;i<6;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
int del(int arr[])
{
    int pos=2;
    int n=5;
    for(int i=pos-1;i<n;i++)
    {
        arr[i]=arr[i+1];
    }
    
    for(int i=0;i<5;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;

}
int linear(int arr[])
{
    int num=1;
    for(int i=0;i<5;i++)
    {
        if(arr[i]==num)
        {
            cout<<"Element found: "<<num<<endl; break;
        }
        else
        {
            cout<<"Not found"; break;
        }
    }
    return 0;
}
int main()
{
    int choice;
    int arr[5]={1,2,3,4,5};
    int brr[6]={2,4,5,6,10};
    cout<<"Enter your choice: ";
    cin>>choice;
    if(choice==1)
    {
        create();
    }
    else if(choice==2)
    {
        display(arr);
    }
    else if(choice==3)
    {
        insert(brr);
    }
    else if(choice==4)
    {
        del(arr);
    }
    else if(choice==5)
    {
        linear(arr);
    }
    else if(choice==6)
    {
        cout<<"Exit"<<endl;
    }
    else
    {
        cout<<"Wrong choice enter again"<<endl;
    }

}