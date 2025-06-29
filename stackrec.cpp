#include <iostream>
#include <stack>
using namespace std;

// Recursive function to delete the middle element
void deleteMiddle(stack<int>& st, int current, int middle) {
    // Base case: If we have reached the middle element, pop it
    if (current == middle) {
        st.pop();
        return;
    }

    // Store the top element and pop it
    int temp = st.top();
    st.pop();

    // Recursive call to delete the middle element
    deleteMiddle(st, current + 1, middle);

    // After middle element is deleted, push the previous elements back
    st.push(temp);
}

// Helper function to initiate the recursion
void deleteMiddleElement(stack<int>& st) {
    int size = st.size();
    if (size == 0) {
        return; // If stack is empty, nothing to delete
    }

    // Find the middle element index (0-based index)
    int middle = size / 2;

    // Call the recursive function to delete the middle element
    deleteMiddle(st, 0, middle);
}

int main() {
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    //st.push(4);
    st.push(5);
    st.push(6);

    // Before deleting the middle element
    cout << "Stack before deleting middle element: ";
     // Temporary stack to display content
    // while (!st.empty()) {
    //     cout << st.top() << " ";
    //     st.pop();
    // }
    cout << endl;

    // Delete the middle element
    deleteMiddleElement(st);

    // After deleting the middle element
    cout << "Stack after deleting middle element: ";
    // Reusing the temporary stack
    while (!st.empty()) {
        cout << st.top() << " ";
        st.pop();
    }
    cout << endl;

    return 0;
}
