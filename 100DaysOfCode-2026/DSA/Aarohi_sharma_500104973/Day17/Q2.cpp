#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int target, res=-1;
    cin>>target;
    for(int i=0; i<n; i++){
        if(arr[i]==target){
            res=i;
            break;
        }
    }
    cout<<res;
}
