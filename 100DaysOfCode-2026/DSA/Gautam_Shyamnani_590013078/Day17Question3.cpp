#include <iostream>
using namespace std;

int integerSquareRoot(int n) {
    if (n < 2) return n;  

    int low = 1, high = n / 2;
    int result = 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

       
        long long square = 1LL * mid * mid;

        if (square == n) {
            return mid;  
        }
        else if (square < n) {
            result = mid;      
            low = mid + 1;     
        }
        else {
            high = mid - 1;    
        }
    }

    return result;
}

int main() {
    int n=25;
    
    int sqrtValue = integerSquareRoot(n);
    cout << "Integer square root of " << n << " is: " << sqrtValue << endl;

    return 0;
}
