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
bool isvowel(char c) {
    c=tolower(c);
    return c=='a'||c=='e'||c=='i'||c=='o'||c=='u';
}
int countvowel(string s) {
    int count=0;
    for(char c:s) {
        if(isvowel(c)) {
            count++;
        }
    }
    return count;
}
int countconsonant(string s) {
    int consonant=0;
    for(char c:s) {
        if(isalpha(c) && !isvowel(c)) {
            consonant++;
        }
    }
    return consonant;
}
int main() {
    string s; getline(cin, s);
    cout<<"Vowel: "<<countvowel(s)<<", Consonant: "<<countconsonant(s)<<endl;
return 0;
}
