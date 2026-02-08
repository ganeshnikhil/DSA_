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
int countpalindrome(string s) {
    long long count=0;
    long long n=s.length();
    for(long long centre=0; centre<2*n-1; centre++) {
        long long left=centre/2;
        long long right=left+(centre%2);
        while(left>=0 && right<n && s[left]==s[right]) {
            count++; 
            left--;
            right++;
        }
    }
    return count;
}
int main() {
    string s; cin>>s;
    int totalpalindromes=countpalindrome(s);
    cout<<totalpalindromes<<endl;
    return 0;
}
