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
bool ispalindrome(string s) {
    long long left=0, right=s.length()-1;
    while(left<right){
        if(s[left]!=s[right]){
            return false;
        }
        left++;
        right--;
    }
    return true;
}
string cleanstring(string s) {
        string cleaned="";
        for(char c:s) {
            if(isalnum(c)){
                cleaned+=tolower(c);
            }
        }
        return cleaned;
    }
int main() {
    string s; getline(cin, s);
    string cleaned=cleanstring(s);
    if(ispalindrome(cleaned)) {
        cout<<"true"<<endl;
    }
    else{
        cout<<"false"<<endl;
    }
    return 0;
}
