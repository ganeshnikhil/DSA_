#include <iostream>
using namespace std;

int countOccurrences(int arr[], int n, int target) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == target)
            count++;
    }
    return count;
}

int main() {
    int arr[1000], n, target;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter " << n << " integers:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter the target number to count: ";
    cin >> target;

    int count = countOccurrences(arr, n, target);

    cout << "The number " << target << " appears " << count << " times in the array." << endl;

    return 0;
}
