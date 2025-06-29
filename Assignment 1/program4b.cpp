#include<iostream>
using namespace std;
int main()
{
    int m,n;
    cout<<"Enter number of rows and columns: ";
    cin>>m;
    cin>>n;
    int arr[m][n];
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<arr[i][j]<<" ";
        }
    cout<<"\n";
    }
    cout<<endl;
    int brr[3][2]={20,4,6,8,10,11};
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<2;j++)
        {
            cout<<brr[i][j]<<" ";
        }
    cout<<"\n";
    }
    int res[3][2]; int rc=n;
    cout<<endl;
    cout<<"Matrix multiplication is: \n";
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<2;j++)
        {
            res[i][j]=0;
            for(int k=0;k<rc;k++)
            {
                res[i][j]+=arr[i][k]*brr[k][j];
            }
        }
    }
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<2;j++)
        {
            cout<<res[i][j]<<" ";
        }
    cout<<"\n";
    }

    
}