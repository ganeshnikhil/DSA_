#include <iostream>
#include <queue>
using namespace std;

int findKthLargest(int arr[], int n, int k) {
    priority_queue<int, vector<int>, greater<int>> minHeap;

    for (int i = 0; i < n; i++) {
        minHeap.push(arr[i]);
        if (minHeap.size() > k)
            minHeap.pop();
    }

    return minHeap.top();
}

int main() {
    int arr[1000], n, k;
    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++) cin >> arr[i];

    cout << "Enter value of K (1 for largest, 2 for 2nd largest...): ";
    cin >> k;

    int result = findKthLargest(arr, n, k);
    cout << "The " << k << "th largest element is: " << result << endl;

    return 0;
}
