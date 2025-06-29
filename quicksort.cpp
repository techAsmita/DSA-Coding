#include<iostream>
using namespace std;
int partition(int arr[],int start,int end)
{
    int pivot=arr[start];
    int count=0;
    for(int i=start+1;i<=end;i++)
    {
        if(arr[i]<=pivot)
        {
            count++;
        }
    }
    int pivotidx=start+count;
    swap(arr[pivotidx],arr[start]);
    int i=start;int j=end;
    while(i<pivotidx&&j>pivotidx)
    {
        while(arr[i]<=pivot)
        {
            i++;
        }
        while(arr[j]>pivot)
        {
            j--;
        }
        if(i<pivotidx&&j>pivotidx)
        {
            swap(arr[i++],arr[j--]);
        }
    }
    return pivotidx;
}
void quicksort(int arr[],int start, int end)
{
    //base case
    if(start>=end)
    {
        return;
    }
    int p=partition(arr,start,end);//pivot element se left and right sorting
    //left wala sort
    quicksort(arr,start,p-1);
    //right wala sort
    quicksort(arr,p+1,end);
}
int main()
{
    int arr[5]={2,4,1,10,9};
    int n=sizeof(arr)/sizeof(arr[0]);
    quicksort(arr,0,n-1);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}