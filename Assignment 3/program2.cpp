#include<iostream>
#include<stack>
using namespace std;
int main()
{
    stack<string>s1;
    s1.push("D");
    s1.push("a");
    s1.push("t");
    s1.push("a");
    s1.push("S");
    s1.push("t");
    s1.push("r");
    s1.push("u");
    s1.push("c");
    s1.push("t");
    s1.push("u");
    s1.push("r");
    s1.push("e");
    cout<<"Reversed string is: ";
    while(!s1.empty())
    {
        cout<<s1.top();
        s1.pop();
    }


}