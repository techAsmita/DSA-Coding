//reverse array
#include<iostream>
using namespace std;
int main()
{
    int arr[5]={1,3,4,10,11};
    cout<<"Straight array: \n";
    for(int i=0;i<5;i++)
    {
        cout<<arr[i]<<" ";
    }
    for(int i=0;i<5;i++)
    {
        int j=4;
        while(i<j)
        {
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
            i++;
            j--;
        }
    }
    cout<<"Reversed array: \n";
    for(int i=0;i<5;i++)
    {
        cout<<arr[i]<<" ";
    }
}