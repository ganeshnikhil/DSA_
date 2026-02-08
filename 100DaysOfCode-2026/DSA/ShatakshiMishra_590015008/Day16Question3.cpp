#include <iostream>
#include <vector>
using namespace std;

int findMaximum(vector<int>& arr) {
    if (arr.empty()) {
        cout << "Array is empty." << endl;
        return -1;
    }

    int maxElement = arr[0];
    for (int i = 1; i < arr.size(); ++i) {
        if (arr[i] > maxElement)
            maxElement = arr[i];
    }
    return maxElement;
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }

    int maxVal = findMaximum(arr);

    cout << maxVal << endl;
}
