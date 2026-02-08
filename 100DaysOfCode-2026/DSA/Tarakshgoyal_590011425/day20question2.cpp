#include <iostream>
using namespace std;

void mergeSortedArrays(int a[], int n, int b[], int m, int result[]) {
    int i = 0, j = 0, k = 0;

    while (i < n && j < m) {
        if (a[i] <= b[j]) {
            result[k++] = a[i++];
        } else {
            result[k++] = b[j++];
        }
    }

    while (i < n) {
        result[k++] = a[i++];
    }

    while (j < m) {
        result[k++] = b[j++];
    }
}

int main() {
    int a[1000], b[1000], result[2000];
    int n, m;

    cout << "Enter size of first sorted array: ";
    cin >> n;
    cout << "Enter " << n << " sorted elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    cout << "Enter size of second sorted array: ";
    cin >> m;
    cout << "Enter " << m << " sorted elements:\n";
    for (int i = 0; i < m; i++) {
        cin >> b[i];
    }

    mergeSortedArrays(a, n, b, m, result);

    cout << "Merged sorted array:\n";
    for (int i = 0; i < n + m; i++) {
        cout << result[i] << " ";
    }
    cout << endl;

    return 0;
}
