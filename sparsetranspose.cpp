#include<iostream>
using namespace std;
int main()
{
    int arr[2][3]={1,0,0,0,10,0};
    int sp[2][3]; int k=0;
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(arr[i][j]!=0)
            {
                sp[k][0]=i;
                sp[k][1]=j;
                sp[k][2]=arr[i][j];
                k++;
            }
        }
    }
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<sp[i][j]<<" ";
        }
    cout<<endl;
    }
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<2;j++)
        {
            cout<<sp[j][i]<<" ";
        }
    cout<<endl;
    }
}