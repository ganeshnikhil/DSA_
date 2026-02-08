#include <iostream>
#include <vector>
using namespace std;
void mandr(const vector<int> &nums, int &m, int &r) {
    int n = nums.size();
    vector<int> count(n + 1, 0);
    for (int num : nums) {
        count[num]++;
    }
    for (int i = 1; i <= n; i++) {
        if (count[i] == 0) {
            m = i;
        } else if (count[i] == 2) {
            r = i;
        }
    }
}
int main() {
    vector<int> nums = {4, 3, 6, 2, 1, 1};
    int m = -1, r = -1;
    mandr(nums, m, r);
    cout << "missing " << m << endl;
    cout << "repeated " << r << endl;
    return 0;
}