#include <queue>//using two queues.
#include <iostream>
using namespace std;
class Stack {
    queue<int> q1, q2;
public:
    void push(int x) {
        q2.push(x);
        while (!q1.empty()) {
            q2.push(q1.front());
            q1.pop();
        }
        swap(q1, q2);
    }
    void pop() {
        if (q1.empty()) {
            cout << "Stack is empty\n";
            return;
        }
        q1.pop();
    }
    int top() {
        if (q1.empty()) {
            cout << "Stack is empty\n";
            return -1;
        }
        return q1.front();
    }
    bool empty() {
        return q1.empty();
    }
};
int main() {
    Stack st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(5);
    cout << st.top() << endl; // 3
    st.pop();
    cout << st.top() << endl; // 2
    cout << (st.empty() ? "Stack is empty" : "Stack is not empty") << endl;
}