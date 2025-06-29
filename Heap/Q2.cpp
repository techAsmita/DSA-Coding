#include <iostream>
#include <climits>
using namespace std;
// Priority Queue using array
class priorityqueue 
{
    int heap[100]; // Fixed-size array for heap
    int size;      // Current size of the heap
    void heapifydown(int index) 
    {
        int largest = index;
        int left = 2 * index + 1;
        int right = 2 * index + 2;
        if (left < size && heap[left] > heap[largest]) {
            largest = left;
        }
        if (right < size && heap[right] > heap[largest]) {
            largest = right;
        }
        if (largest != index) {
            swap(heap[index], heap[largest]);
            heapifydown(largest);
        }
    }
    void increasekey(int index, int value) 
    {
        if (value < heap[index]) {
            cout << "New value is smaller than the current value" << endl;
            return;
        }
        heap[index] = value;
        while (index > 0 && heap[(index - 1) / 2] < heap[index]) {
            swap(heap[index], heap[(index - 1) / 2]);
            index = (index - 1) / 2;
        }
    }
public:
    priorityqueue()
    {
        size=0;
    }
    void maxheapinsert(int value) 
    {
        if (size >= 100) {
            cout << "Heap overflow" << endl;
            return;
        }
        heap[size] = INT_MIN;
        increasekey(size, value);
        size++;
    }
    int extractmax() 
    {
        if (size == 0) {
            cout << "Underflow" << endl;
            return INT_MIN;
        }
        int maxval = heap[0];
        heap[0] = heap[--size];
        heapifydown(0);
        return maxval;
    }
    int top() 
    {
        if (size == 0) 
        {
            cout << "Underflow" << endl;
            return INT_MIN;
        }
        return heap[0];
    }

    void print() 
    {
        for (int i = 0; i < size; i++) 
        {
            cout << heap[i] << " ";
        }
        cout << endl;
    }
};
int main() 
{
    priorityqueue pq;
    cout << "Max heap operations: " << endl;
    pq.maxheapinsert(100);
    pq.maxheapinsert(20);
    pq.maxheapinsert(15);
    pq.maxheapinsert(30);
    pq.print();
    cout << "Top element: " << pq.top() << endl;
    cout << "Extract max: " << pq.extractmax() << endl;
    pq.print();
}
