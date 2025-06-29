#include<iostream>
using namespace std;
int maxarrelem(int arr[], int n)
{
    int max=0;
    for(int j=0;j<n;j++)
    {
        if(max<arr[j])
        {
            max=arr[j];
            return max;
        }
    }
}
int main()
{
    int n;
    cout<<"enter size of array: ";
    cin>>n;
    int arr[n];
    for(int i=0;i<=n-1;i++)
    {
        cout<<"enter array elements: "<< i+1;
        cin>>arr[i];
    }
    for(int i=0;i<=n-1;i++)
    {
        cout<<arr[i];
    }
    maxarrelem(arr,n);
}