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
string tolowercase(const string &s) {
    string result=s;
    transform(result.begin(), result.end(), result.begin(), ::tolower);
    return result;
}
bool anagram(string s1, string s2) {
    s1.erase(remove(s1.begin(), s1.end(),' '), s1.end());
    s2.erase(remove(s2.begin(), s2.end(),' '), s2.end());
    s1=tolowercase(s1);
    s2=tolowercase(s2);
    if(s1.length()!=s2.length()){
        return false;
    }
    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());
    return s1==s2;
}
int main() {
    string s1, s2; 
    getline(cin, s1);
    getline(cin, s2);
    if(anagram(s1, s2)) {
        cout<<"true"<<endl;
    }
    else{
        cout<<"false"<<endl;
    }
return 0;
}
