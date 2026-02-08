#include<iostream>
#include<algorithm>
#include<vector>
#include<bitset>
#include<set>
#include<climits>
#include<ctime>
#include<map>
#include<unordered_map>
#include<cstdlib>
#include<string>
#include<queue>
using namespace std;
int checkcount(int a[], int n, int target) {
    int count=0;
    for(int i=0; i<n; i++) {
        if(a[i]==target) {
            count++;
        }
    }
    if(count==0){
        return -1;
    }
    return count;
}
int main() {
    int n, target, count; cin>>n;
    int a[n];
    for(int i=0; i<n; i++) {
        cin>>a[i];
    }
    cin>>target;
    count=checkcount(a, n, target);
    if(count==-1){
        cout<<"-1"<<endl;
    }
    else {
        cout<<count<<endl;
    }
return 0;
}
