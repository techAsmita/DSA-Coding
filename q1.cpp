#include<iostream>
using namespace std;
int x(int n)
{
    if(n<3)
    {
        return 1;
    }
    else
    {
        return x(n-1)+x(n-1)+1;
    }
}
int main()
{
    int c=x(5);
    cout<<c<<endl;
}