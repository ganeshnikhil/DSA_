#include <bits/stdc++.h>
using namespace std;
int main() {
    string inp;
    getline(cin, inp);
    int count=0;
    unordered_map<char, int> mp;
    for(int i=0; i<inp.size(); i++){
        mp[inp[i]]++;
    }
    for(auto const& pos: mp){
        if(pos.second%2!=0) count++;
    }
    if(count>1) cout<<"false";
    else cout<<"true";
    return 0;
}
