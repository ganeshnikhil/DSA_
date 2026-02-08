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
string trim(const string &s) {
    int start=0;
    while(start<s.length() && isspace(s[start])) {
        start++;
    }
    int end=s.length()-1;
    while(end>=0 && isspace(s[end])) {
        end--;
    }
    if(start>end){
        return " ";
    }
    return s.substr(start, end-start+1);
}
int main() {
    string s, nospaces; getline(cin, s);
    string trimmed=trim(s);
    for(char c:s) {
        if(c!=' ') {
            nospaces+=c;
        }
    }
    cout<<"Remove all: "<<nospaces<<", Trim: "<<trimmed<<", Single spaces: "<<trimmed<<endl;
return 0;
}
