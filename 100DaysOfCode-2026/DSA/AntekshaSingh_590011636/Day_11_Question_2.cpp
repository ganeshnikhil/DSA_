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
string longestpalindrome(string s) {
    if(s.empty()) return "";
    long long n=s.size();
    vector<vector<bool>> dp(n, vector<bool>(n, false));
    long long start=0;
    long long max_length = 1;
    for(long long i=0; i<n; i++) {
        dp[i][i]=true;
    }
    for(long long i=0; i<n-1; i++) {
        if(s[i]==s[i+1]) {
            dp[i][i+1]=true;
            start=i;
            max_length=2;
        }
    }
    for(long long len=3; len<=n; len++) {
        for(long long i=0; i<n-len+1; i++) {
            long long j=i+len-1;
            if(s[i]==s[j] && dp[i+1][j-1]) {
                dp[i][j]=true;
                if(len>max_length) {
                    start=i;
                    max_length=len;
                }
            }
        }
    }
    
    return s.substr(start, max_length);
}
