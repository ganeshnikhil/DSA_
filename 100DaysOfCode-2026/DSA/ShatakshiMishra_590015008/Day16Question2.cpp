#include <iostream>
#include <vector>
using namespace std;

int countOccurrences(vector<int>& arr, int target) {
    int count = 0;
    for (int num : arr) {
        if (num == target)
            count++;
    }
    return count;
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    int target;
    cin >> target;

    int result = countOccurrences(arr, target);

    cout << result << endl;
}
