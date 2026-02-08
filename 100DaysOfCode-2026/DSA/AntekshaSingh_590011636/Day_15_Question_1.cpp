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
int main() {
    long long n; cin>>n;
    long long a[n];
    for(long long i=0; i<n; i++) {
        cin>>a[i];
    }
    sort(a, a+n);
    cout<<"[";
    for(long long i=0; i<n; i++) {
        cout<<a[i]<<",";
    }
    cout<<"]"<<endl;
return 0;
}
