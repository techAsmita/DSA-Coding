//linear search
#include<iostream>
using namespace std;
int main()
{
    int arr[5];
    cout<<"Enter elements of array:"<<endl;
    for(int i=0;i<5;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<5;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int x;
    cout<<"Enter the element you want to search:"<<endl;
    cin>>x;
    bool found=false;
    for(int i=0;i<5;i++)
    {
        if(arr[i]==x)
        {
            cout<<"Element found: "<<x<<endl;
            found=true;
            break;
        }
    }
    if(!found)
    {
        cout<<"Element not found"<<endl;
    }
}