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
string cleanstring(const string &s) {
    string cleaned="";
    for(char c:s) {
        if(isalnum(c)) { 
            cleaned+=tolower(c);
        }
    }
    return cleaned;
}
bool palindrome(const string &s) {
    string cleaned=cleanstring(s);
    int left=0, right=cleaned.length()-1;
    while(left<right) {
        if(cleaned[left]!=cleaned[right]) {
            return false;
        }
        left++;
        right--;
    }
    return true;
}
int main() {
    string s; getline(cin, s);
    if (palindrome(s)) {
        cout<<"true"<<endl;
    } else {
        cout<<"false"<<endl;
    }
    return 0;
}
