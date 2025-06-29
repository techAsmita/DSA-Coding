#include<iostream>
using namespace std;
int main()
{
    int arr[5]={5,2,2,1,6};
    int res[5]; int k=0;
    for(int i=0;i<5;i++)
    {
        bool isduplicate=false;
        for(int j=0;j<k;j++)
        {
            if(arr[i]==res[j])
            {
                isduplicate=true;
            }
        }
        if(!isduplicate)
        {
            res[k++]=arr[i];
        }
    }

    for(int i=0;i<k;i++)
    {
        cout<<res[i]<<" ";
    }
}