// day1.md
// 2. Missing and Repeated

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> nums;
    int n, value;
    int missing = -1, repeated = -1;

    cout << "Size of array: ";
    cin >> n;

    cout << "Enter values in array:\n";
    for (int i = 0; i < n; i++) {
        cin >> value;
        nums.push_back(value);
    }

    sort(nums.begin(), nums.end());

    // Check for repeated number and missing in between
    for (int i = 0; i < n - 1; i++) {
        if (nums[i] == nums[i + 1]) {
            repeated = nums[i];
        }
        else if (nums[i + 1] != nums[i] + 1) {
            missing = nums[i] + 1;
        }
    }

    // Edge cases
    if (nums[0] != 1) {
        missing = 1;
    }
    else if (nums[n - 1] != n) {
        missing = n;
    }

    cout << "Missing : " << missing << endl;
    cout << "Repeated : " << repeated << endl;

    return 0;
}
