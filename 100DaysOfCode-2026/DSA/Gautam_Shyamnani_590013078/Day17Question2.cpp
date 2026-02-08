#include <iostream>
#include <vector>
using namespace std;

int findFirstOccurrence(const vector<int>& arr, int target) {
    int low = 0;
    int high = arr.size() - 1;
    int result = -1;  
    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == target) {
            result = mid;       
            high = mid - 1;     
        }
        else if (arr[mid] < target) {
            low = mid + 1;      
        }
        else {
            high = mid - 1;    
        }
    }

    return result;
}

int main() {
    vector<int> arr = {1, 1, 1, 2, 3, 3};
    int target = 1;

    int index = findFirstOccurrence(arr, target);

    if (index != -1)
        cout << "First occurrence of " << target << " is at index: " << index << endl;
    else
        cout << "Target not found." << endl;

    return 0;
}
