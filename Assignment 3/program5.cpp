#include <iostream>
#include <stack>
using namespace std;
int evaluatePostfix(const string &expression) {
    stack<int> st;
    for (char ch : expression) {
        if (isdigit(ch)) {
            st.push(ch - '0'); // Convert char to int and push
        } else {
            int b = st.top(); st.pop(); // Operand 2
            int a = st.top(); st.pop(); // Operand 1
            switch (ch) {
                case '+': st.push(a + b); break;
                case '-': st.push(a - b); break;
                case '*': st.push(a * b); break;
                case '/': 
                    if (b != 0) st.push(a / b);
                    else {
                        cout << "Error: Division by zero" << endl;
                        return 0;
                    }
                    break;
                default:
                    cout << "Error: Unknown operator " << ch << endl;
            }
        }
    }
    return st.top();
}

int main() {
    string str = "573+*";
    cout << "The result is: " << evaluatePostfix(str) << endl;
    return 0;
}
