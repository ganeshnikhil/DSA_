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
char firstunique(string s) {
    unordered_map<char, int>frequency;
    for(char c:s) {
        frequency[c]++;
    }
    for(char c:s) {
        if(frequency[c]==1) {
            return c;
        }
    }
    return -1;
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
    char result=firstunique(cleaned);
    if(result==-1) {
        cout<<-1<<endl;
    }
    else{
        cout<<result<<endl;
    }
return 0;
}
