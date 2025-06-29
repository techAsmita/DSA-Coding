#include<iostream>
using namespace std;
int main()
{
    int a[] = {31, 41, 59, 26, 41, 58};
    int n=sizeof(a)/sizeof(a[0]);
    for(int i=1;i<n;i++)
    {
        int j=i;
        while(j>0&&a[j]<a[j-1])
        {
            swap(a[j],a[j-1]);
            j--;
        }

    }
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}