#include <iostream>
#include <stack>
using namespace std;

bool check(string str)
{
    stack<char> s;
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] == '(' || str[i] == '{' || str[i] == '[')
        {
            s.push(str[i]);
        }
        else if (str[i] == ')')
        {
            if (s.empty() || s.top() != '(')
            {
                return false;
            }
            s.pop();
        }
        else if (str[i] == '}')
        {
            if (s.empty() || s.top() != '{')
            {
                return false;
            }
            s.pop();
        }
        else if (str[i] == ']')
        {
            if (s.empty() || s.top() != '[')
            {
                return false;
            }
            s.pop();
        }
        else
        {
            // Ignore non-parenthesis characters
            continue;
        }
    }
    return s.empty();
}

int main()
{
    string str = "[()]{}{[()()]()}"; // Example of balanced parentheses
    cout << check(str) << endl; // Output: 1
}