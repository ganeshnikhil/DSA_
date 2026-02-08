#include <iostream>
#include <vector>
#include <queue>

int findKthLargest(const std::vector<int>& nums, int k) {

    std::priority_queue<int, std::vector<int>, std::greater<int>> minHeap;

    for (int num : nums) {
        minHeap.push(num);
        if (minHeap.size() > k) {
            minHeap.pop(); 
        }
    }

    return minHeap.top(); 
}

int main() {
    std::vector<int> nums = {1, 23, 12, 9, 30, 2, 50};
    int k = 4;

    int result = findKthLargest(nums, k);
    std::cout << "The " << k << "th largest element is: " << result << std::endl;

    return 0;
}
