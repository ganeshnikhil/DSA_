#include <bits/stdc++.h>
using namespace std;
int main() {
    string inp;
    getline(cin, inp);
    int count=0;
    string longest=""; 
    string word;
    stringstream ss(inp);
    while(ss>>word){
        count++;
        if(word.length()>longest.length()){
            longest=word;
        }
    }
    cout<<"Word Count: "<<count<<", Longest word: "<<longest;
    return 0;
}
