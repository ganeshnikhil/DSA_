// day4.md
// 3. Remove All Occurrences of a Value

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int size, value, val;
    vector<int> arr;

    cout << "Enter the size of array: ";
    cin >> size;

    for (int i = 0; i < size; i++) {
        cin >> value;
        arr.push_back(value);
    }

    cout << "Enter the value to remove: ";
    cin >> val;

    int left = 0;
    int right = size - 1;

    while (left <= right) {
        if (arr[left] == val && arr[right] != val) {
            swap(arr[left], arr[right]);
            left++;
            right--;
        }
        else if (arr[left] == val && arr[right] == val) {
            right--;
        }
        else if (arr[left] != val && arr[right] == val) {
            right--;
        }
        else {
            left++;
        }
    }

    cout << "New length: " << right + 1 << endl;

    cout << "Updated array: ";
    for (int i = 0; i <= right; i++) {
        cout << arr[i] << " ";
    }
}
