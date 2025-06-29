#include<iostream>
#include<stack>
using namespace std;
int precedence(char c)
{
    if(c=='^')
    {
        return 3;
    }
    else if(c=='/'||c=='*')
    {
        return 2;
    }
    else if(c=='+'||c=='-')
    {
        return 1;
    }
    else
    {
        return -1;
    }

}
void infixpostfix(string s)
{
    stack<char>s1;
    string result;
    s.append(")");
    s1.push('(');
    for(int i=0;i<=s.length();i++)
    {
        char c=s[i];
        if((c>='a'&&c<='z') || (c>='A'&&c<='Z') || (c>='0'&&c<='9'))
        {
            result+=c;
        }
        else if(c=='(')
        {
            s1.push('(');
        }
        else if(c==')')
        {
            while(s1.top()!='(')
            {
                result+=s1.top();
                s1.pop();
            }
            s1.pop();//pop the bracket
        }
        else//checking operator precedence.
        {
            while(!s1.empty()&&precedence(s[i])<=precedence(s1.top()))
            {
                result+=s1.top();
                s1.pop();
            }
        s1.push(c);

        }
    }
cout<<"The final expression is: "<<result<<endl;
}
int main()
{
    string expression="(((A+B)-C*(D/E))+F)";
    infixpostfix(expression);
}