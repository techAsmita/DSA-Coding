#include<iostream>
using namespace std;
void merge(int arr[], int start, int end)
{
    int mid=(start+end)/2;
    int len1=mid-start+1;//first subarray
    int len2=end-mid;//secodn subarray
    int *first=new int[len1];
    int *second=new int[len2];
    //copy values
    int mainarridx=start;
    for(int i=0;i<len1;i++)
    {
        first[i]=arr[mainarridx++];
    }
    mainarridx=mid+1;
    for(int i=0;i<len2;i++)
    {
        second[i]=arr[mainarridx++];
    }
    //merge 2 sorted arrays;
    int idx1=0;
    int idx2=0;
    mainarridx=start;
    while(idx1<len1&&idx2<len2)
    {
        if(first[idx1]<second[idx2])
        {
            arr[mainarridx++]=first[idx1++];
        }
        else
        {
            arr[mainarridx++]=second[idx2++];
        }
    }
    while(idx1<len1)
    {
        arr[mainarridx++]=first[idx1++];
    }
    while(idx2<len2)
    {
        arr[mainarridx++]=second[idx2++];
    }
    delete [] first;
    delete [] second;
}
void mergesort(int arr[], int start, int end)
{
    //base case
    if(start>=end)//zero or 1 element
    {
        return;
    }
    int mid=(start+end)/2;
    //left part
    mergesort(arr,start,mid);
    //right part.
    mergesort(arr,mid+1,end);
    //then merge both arrays;
    merge(arr,start,end);
    
}
int main()
{
    int arr[5]={50,6,3,11,1};
    int n=5;
    mergesort(arr,0,n-1);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}