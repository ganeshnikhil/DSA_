#include <iostream>
using namespace std;

int findPeakElement(int arr[], int n) {
    int low = 0, high = n - 1;

    while (low <= high) {
        int mid = (low + high) / 2;

        bool leftOk = (mid == 0 || arr[mid] > arr[mid - 1]);
        bool rightOk = (mid == n - 1 || arr[mid] > arr[mid + 1]);

        if (leftOk && rightOk) {
            return mid;
        } else if (mid > 0 && arr[mid - 1] > arr[mid]) {
            high = mid - 1;  // Move to left half
        } else {
            low = mid + 1;   // Move to right half
        }
    }

    return -1; // Should never reach here if input is valid
}

int main() {
    int arr[1000], n;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter " << n << " integers:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int peakIndex = findPeakElement(arr, n);
    cout << "Peak element found at index: " << peakIndex << ", value: " << arr[peakIndex] << endl;

    return 0;
}
