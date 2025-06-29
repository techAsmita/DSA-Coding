#include<iostream>
#include<limits>
using namespace std;
int main()//bubble sort
{
    // int arr[5]={3,-60,1,-2,90};
    // for(int i=0;i<5;i++)
    // {
    //     bool flag=true;
    //     for(int j=i+1;j<5;j++)
    //     {
    //         if(arr[i]>arr[j])
    //         {
    //             int temp=arr[i];
    //             arr[i]=arr[j];
    //             arr[j]=temp;
    //             flag=false;
    //         }
    //     }
    // if(flag==true) break;
    // }
    // for(int i=0;i<5;i++)
    // {
    //     cout<<arr[i]<<" ";
    // }

    //selection sort
//     int arr[5]={-1,-5,3,12,90};
    
//     for(int i=0;i<5;i++)
//     {
//         int min=INT_MAX;
//         int minidx=-1;
//         for(int j=i;j<5;j++)
//         {  
//             if(min>arr[j])
//             {
//                 min=arr[j];
//                 minidx=j;
//             }
//         }
//         int temp=arr[minidx];
//         arr[minidx]=arr[i];
//         arr[i]=temp;
    
// }
// for(int i=0;i<5;i++)
// {
//     cout<<arr[i]<<" ";
// }

//insertion sort
int arr[5]={4,6,7,90,1};
for(int i=1;i<5;i++)
{
    int j=i;
    while(j>0&&arr[j]<arr[j-1])
    {
        swap(arr[j],arr[j-1]);
        j--;
    }
}
for(int i=0;i<5;i++)
{
    cout<<arr[i]<<" ";
}
}