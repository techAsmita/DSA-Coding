#include<iostream>
#include<set>
using namespace std;
int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements of the array:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    set<int> distinct_elements(arr, arr + n);
    cout <<"The number of distinct elements is: "<<distinct_elements.size()<<endl;
}