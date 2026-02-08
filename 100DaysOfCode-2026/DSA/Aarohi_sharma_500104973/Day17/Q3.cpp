#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    if (n < 0) {
        return -1; 
    }
    if (n == 0 || n == 1) {
        return n;
    }
    long long low = 1;
    long long high = n;
    long long ans = 1; 
    while (low <= high) {
        long long mid = low + (high - low) / 2; 
        long long square = mid * mid;
        if (square == n) {
            ans=mid;
            break;
        } else if (square < n) {
            ans = mid; 
            low = mid + 1;
        } else {
            high = mid - 1; 
        }
    }
    cout<<static_cast<int>(ans);
}
