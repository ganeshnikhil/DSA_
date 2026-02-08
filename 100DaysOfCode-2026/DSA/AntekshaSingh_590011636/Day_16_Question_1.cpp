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
int linearsearch(int a[], int n, int target) {
    for(int i=0; i<n; i++) {
        if(a[i]==target) {
            return i;
        }
    }
    return -1;
}
int main() {
    int n, target; cin>>n;
    int a[n];
    for(int i=0; i<n; i++) {
        cin>>a[i];
    }
    cin>>target;
    int point=linearsearch(a, n, target);
    if(point!=-1){
        cout<<point<<endl;
    }
    else {
        cout<<"-1"<<endl;;
    }
return 0;
}
