#include<iostream>
using namespace std;
int main()
{
    int arr[3][3]={1,2,3,4,5,6,7,8,9};
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<arr[i][j]<<" ";
        }
    cout<<"\n";
    }
    int sumr=0;
    int sumc=0;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            sumr=sumr+arr[i][j];
        }
    cout<<"Sum of row is "<<i+1<<": "<<sumr<<endl;
    }
    for(int j=0;j<3;j++)
    {
        for(int i=0;i<3;i++)
        {
            sumc=sumc+arr[i][j];
        }
    cout<<"Sum of column is "<<j+1<<": "<<sumc<<endl;
    }

}