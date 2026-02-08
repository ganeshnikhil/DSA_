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
void checkchar(const string &s1,const string &s2){
    if(s1.length()!=s2.length()){
        cout<<"Not equal:";
        return;
    }
         for(int i=0; i<s1.length(); i++) {
            if(s1[i]!=s2[i]){
               cout<<"Not equal";
               return;
            }
           
         }
    cout<<"equal";
}
void caseinsensitiveequal(const string &s1,const string &s2){
    if(s1.length()!=s2.length()){
        cout<<" ,Not equal ignoring case";
        return;
    }
         for(int i=0; i<s1.length(); i++) {
            if(tolower(s1[i])!=tolower(s2[i])){
               cout<<", Not equal ignoring case";
               return;
            }
           
         }
    cout<<", Equal ignoring case";
}
    
int main() {
    string s1; getline(cin, s1);
    string s2; getline(cin, s2);
    checkchar(s1, s2);
    caseinsensitiveequal(s1, s2);
    if (s1<s2) {
        cout<<", "<<s1<<" comes before "<<s2;
    } else if(s1>s2) {
        cout<<", "<<s2<<" comes before "<<s1;
    } else {
        cout<<", Strings are identical";
    }
    return 0;
}
