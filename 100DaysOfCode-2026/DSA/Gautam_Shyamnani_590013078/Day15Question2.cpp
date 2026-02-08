#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    string arr[] = {"apple", "pie", "washington", "cat"};
    int n = sizeof(arr) / sizeof(arr[0]);

    stable_sort(arr, arr + n, [](string a, string b) {
        return a.length() < b.length();
    });

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
