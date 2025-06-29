#include<iostream>//optimized bubble sort for better time complexity
using namespace std;
int main()
{
    int arr[6]={2,102,1,60,9,100};
    for(int i=0;i<6;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<6;i++)
    {
        bool flag =true;//array sorted
        for(int j=i+1;j<6;j++)
        {
            if(arr[i]>arr[j])
            {
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
                flag=false;
            }
        }
    if(flag) break;
    }
    for(int i=0;i<6;i++)
    {
        cout<<arr[i]<<" ";
    }
}