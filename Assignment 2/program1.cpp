#include<iostream>
using namespace std;
int main()
{
    //linear search
    // int arr[5]={1,2,3,4,10};
    // int x=4;
    // for(int i=0;i<5;i++)
    // {
    //     if(arr[i]==x)
    //     {
    //         cout<<"Element found is: "<<x<<endl; break;
    //     }
    // }

    //binary search
    int arr[5]={1,2,3,4,5};
    int x=5;
    int l=0,r=4;
    int m=(l+r)/2;
    for(int i=0;i<5;i++)
    {
        if(arr[m]==x)
        {
            cout<<"Element found: "<<x<<endl; break;
        }
        else if(arr[m]>x)
        {
            r=m-1;
            cout<<x<<endl; break;
        }
        else
        {
            l=m-1;
            cout<<x<<endl; break;
        }
    }
}