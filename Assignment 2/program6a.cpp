#include<iostream>
using namespace std;
int main()
{
    int a[3][3]={1,0,0,0,1,3,0,0,9};
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d ",a[i][j]);

        }
    printf("\n");
    }
    printf("\n");

    int b[3][3];
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            b[i][j]=a[j][i];
        }
    }
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d ",b[i][j]);

        }
    printf("\n");
    }
    printf("\n");
    int sp[4][3]; int k=0;
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<3;j++)
        {
           if(b[i][j]!=0)
           {
            sp[k][0]=i;
            sp[k][1]=j;
            sp[k][2]=b[i][j];
            k++;

           }
        }
    }
for(int i=0;i<4;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<sp[i][j]<<" ";
        }
    printf("\n");
    }
}