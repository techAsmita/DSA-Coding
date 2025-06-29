#include <iostream>
#include <queue>
using namespace std;

void interleaveQueue(queue<int>&q) 
    {
    int n = q.size();
    if (n % 2 != 0) {
        cout << "The queue does not have an even length!" << std::endl;
        return;
    }

    // Create another queue to hold the first half
    queue<int>firstHalf;

    // Transfer the first half to the new queue
    for (int i = 0; i < n / 2; i++) {
        firstHalf.push(q.front());
        q.pop();
    }

    // Now interleave the two halves
    while (!firstHalf.empty()) {
        q.push(firstHalf.front());  // Add element from the first half
        firstHalf.pop();
        
        q.push(q.front());           // Add element from the second half
        q.pop();
    }
}

int main() {
    // Initialize a queue with an even number of elements
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.push(6);

    // Interleave the queue
    interleaveQueue(q);

    // Output the interleaved queue
    cout << "Interleaved queue: ";
    while (!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }
    cout << std::endl;

    return 0;
}
