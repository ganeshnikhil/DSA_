#include <iostream>
#include <vector>
using namespace std;
int arrsum(vector<int>& nums) {
    int sum = 0;
    for (int i=0;i<nums.size();i++) {
        sum += nums[i];
    }
    return sum;
}
int main() {
    vector<int> nums = {5, 3, 8, -2, 4};
    int ans = arrsum(nums);
    cout << "sum " << ans << endl;
    return 0;
}