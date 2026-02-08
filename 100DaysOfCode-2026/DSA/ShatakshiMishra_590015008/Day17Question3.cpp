#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int ans = 0;
    
    if (n == 0 || n == 1)
    {
        ans = n;
        cout << ans << endl;
        return 0;
    }

    int low = 1, high = n;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        long long square = 1LL * mid * mid;

        if (square == n) 
        {
            ans = mid;
            break;
        } 
        else if (square < n) 
        {
            ans = mid;
            low = mid + 1;
        } 
        else 
        {
            high = mid - 1;
        }
    }
    cout << ans << endl;
}
