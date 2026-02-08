#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int ans=INT_MIN;
    for(int i=0; i<n; i++){
        if(arr[i]>ans) ans=arr[i];
    }
    cout<<ans;
    return 0;
}
