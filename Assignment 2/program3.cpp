#include<iostream>
using namespace std;
int findnum(int arr[], int n)
{
    int totalsum=(n+1)*(n+2)/2;
    int arrsum=0;
    for(int i=0;i<n;i++)
    {
        arrsum+=arr[i];
    }
    return totalsum-arrsum;//missing num.
}
int main()
{
    int arr[]={1,2,3,4,5,6,7,8};//sorted array with one missing number
    int n=sizeof(arr) / sizeof(arr[0]);
    int missingnum= findnum(arr,n);
    cout<<"The missing num is: "<<missingnum<<endl;
}