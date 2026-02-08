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
bool comparelength(const string &a, const string &b) {
    return a.length()<b.length();
}
int main() {
    long long n; cin>>n;
    string a[n];
    for(long long i=0; i<n; i++) {
        cin>>a[i];
    }
    sort(a, a+n, comparelength);
    cout<<"[";
    for(long long i=0; i<n; i++) {
        cout<<a[i]<<", ";
    }
    cout<<"]"<<endl;
return 0;
}
