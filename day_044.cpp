// day17.md
// 2. First Occurrence

#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> arr;
    int size, input, target;

    cout << "Enter size of array: ";
    cin >> size;

    cout << "Enter elements (sorted): ";
    for (int i = 0; i < size; i++) {
        cin >> input;
        arr.push_back(input);
    }

    cout << "Target to find: ";
    cin >> target;

    int left = 0;
    int right = size - 1;
    int firstIndex = -1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target) {
            firstIndex = mid;      // store result
            right = mid - 1;       // search left side
        }
        else if (arr[mid] > target) {
            right = mid - 1;
        }
        else {
            left = mid + 1;
        }
    }

    if (firstIndex != -1) {
        cout << "First occurrence at index " << firstIndex << endl;
    } else {
        cout << "Target value doesn't exist in array" << endl;
    }

    return 0;
}
