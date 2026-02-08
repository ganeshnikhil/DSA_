#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    for (int i=0; i<n-1; i++) {
        int min_idx=i;
        for (int j=i+1; j<n; j++) {
            if (arr[j]<arr[min_idx]) {
                min_idx=j;
            }
        }
        if (min_idx!=i) {
            swap(arr[i], arr[min_idx]);
        }
    }
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
