#include<iostream>
using namespace std;
int fact(int n)
{
    if(n==1||n==0)
    return 1;
    return n*fact(n-1);
}
int main()
{
    int n;
    cout<<"Enter your num: ";
    cin>>n;
    int result = fact(n);
    cout<<result<<endl;
}