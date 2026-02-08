#include <bits/stdc++.h>
using namespace std;
int main() {
    string inp;
    getline(cin, inp);
    string word;
    string out="";
    stringstream ss(inp);
    vector<string> arr;
    while(ss>>word){
        arr.push_back(word);
    }
    for(int i=arr.size()-1; i>=0; i--){
        out+=arr[i];
        out+=" ";
    }
    cout<<out;
    return 0;
}
