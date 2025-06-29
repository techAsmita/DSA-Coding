#include<iostream>//heap sort increasing
using namespace std;
// void swap(int *a, int *b)
// {
//     int temp=*a;
//     *a=*b;
//     *b=temp;
// }
// void heapify(int arr[], int n, int i)
// {
//     int largest=i;
//     int left=2*i+1;
//     int right=2*i+2;
//     if(left<n&&arr[left]>arr[largest])
//     {
//         largest=left;
//     }
//     if(right<n&&arr[right]>arr[largest])
//     {
//         largest=right;
//     }
//     if(largest!=i)
//     {
//         swap(&arr[i],&arr[largest]);
//         heapify(arr,n,largest);
//     }
// }
// void heapsort(int arr[],int n)
// {
//     for(int i=n/2-1;i>=0;i--)
//     {
//         heapify(arr,n,i);
//     }
//     for(int i=n-1;i>=0;i--)
//     {
//         swap(&arr[0],&arr[i]);
//         heapify(arr,i,0);
//     }
// }
// void print(int arr[], int n)
// {
//     for(int i=0;i<n;i++)
//     {
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
// }
// int main()
// {
//     int arr[]={12,11,13,5,6,7};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     heapsort(arr,n);
//     cout<<"Sorted array is in increasing order: "<<endl;
//     print(arr,n);
// }

//decreasing 
void swap(int *a, int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}
void heapify(int arr[], int n, int i)
{
    int smallest=i;
    int left=2*i+1;
    int right=2*i+2;
    if(left<n&&arr[left]<arr[smallest])
    {
        smallest=left;
    }
    if(right<n&&arr[right]<arr[smallest])
    {
        smallest=right;
    }
    if(smallest!=i)
    {
        swap(&arr[i],&arr[smallest]);
        heapify(arr,n,smallest);
    }
}
void heapsort(int arr[],int n)
{
    for(int i=n/2-1;i>=0;i--)
    {
        heapify(arr,n,i);
    }
    for(int i=n-1;i>=0;i--)
    {
        swap(&arr[0],&arr[i]);
        heapify(arr,i,0);
    }
}
void print(int arr[], int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    int arr[]={12,11,13,5,6,7};
    int n=sizeof(arr)/sizeof(arr[0]);
    heapsort(arr,n);
    cout<<"Sorted array is in decreasing order: "<<endl;
    print(arr,n);
}