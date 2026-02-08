#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

bool compareLength(const string &a, const string &b) {
    return a.length() < b.length();
}

int main() {
    int n;
    string arr[1000];

    cout << "Enter number of strings: ";
    cin >> n;
    cin.ignore();

    cout << "Enter " << n << " strings:\n";
    for (int i = 0; i < n; i++) {
        getline(cin, arr[i]);
    }

    stable_sort(arr, arr + n, compareLength);

    cout << "Strings sorted by length:\n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << endl;
    }

    return 0;
}
