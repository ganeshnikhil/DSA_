#include <iostream>
using namespace std;

int integerSqrt(int n) {
    if (n == 0 || n == 1) return n;

    int low = 1, high = n, ans = 0;

    while (low <= high) {
        int mid = (low + high) / 2;
        long long square = (long long)mid * mid;

        if (square == n)
            return mid;
        else if (square < n) {
            ans = mid;      // possible answer
            low = mid + 1;  // try for a bigger number
        } else {
            high = mid - 1; // try for a smaller number
        }
    }

    return ans;
}

int main() {
    int n;
    cout << "Enter a positive number: ";
    cin >> n;

    int sqrtValue = integerSqrt(n);
    cout << "Integer square root of " << n << " is: " << sqrtValue << endl;

    return 0;
}
