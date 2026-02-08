#include <iostream>

using namespace std;

void sort(int nums[], int n) {
    // BUBBLE SORT
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (nums[j] > nums[j + 1]) {
                int temp = nums[j];
                nums[j] = nums[j + 1];
                nums[j + 1] = temp;
            }
        }
    }
}

void MissingAndDuplicate(int nums[], int n) {
    sort(nums, n); 

    int duplicate = -1, missing = -1;

    for (int i = 1; i < n; i++) {
        if (nums[i] == nums[i - 1]) {
            duplicate = nums[i]; 
        }
        else if (nums[i] > nums[i - 1] + 1) {
            missing = nums[i - 1] + 1;
        }
    }

    if (nums[0] != 1) missing = 1;
    if (nums[n - 1] != n) missing = n;

    cout << "Duplicate: " << duplicate << endl;
    cout << "Missing: " << missing << endl;
}

int main() {
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    int nums[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    MissingAndDuplicate(nums, n);

    return 0;
}
