#include<iostream>
using namespace std;
int main()
{
    int arr[7]={64,34,25,12,22,11,90};
    cout<<"Unsorted array: \n";
    for(int i=0;i<7;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<7;i++)
    {
        bool flag=true;
        for(int j=i+1;j<7;j++)
        {
            if(arr[i]>arr[j])
            {
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
                flag=false;
            }
        }
    if(flag==true) break;
    }
    cout<<"Sorted array: \n";
    for(int i=0;i<7;i++)
    {
        cout<<arr[i]<<" ";
    }
}