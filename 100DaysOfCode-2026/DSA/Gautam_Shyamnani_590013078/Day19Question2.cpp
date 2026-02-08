#include <iostream>
#include <vector>
using namespace std;


int findPeakElement(const vector<int>& nums) {
    int left = 0, right = nums.size() - 1;

    while (left < right) {
        int mid = left + (right - left) / 2;

       
        if (nums[mid] < nums[mid + 1]) {
            left = mid + 1;
        } else {
            
            right = mid;
        }
    }

   
    return left;
}

int main() {
    vector<int> nums = {1, 3, 20, 4, 1, 0};  
    int peakIndex = findPeakElement(nums);
    cout << "Peak found at index: " << peakIndex << " with value: " << nums[peakIndex] << endl;
    return 0;
}
