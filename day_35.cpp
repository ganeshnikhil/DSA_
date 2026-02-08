// day13.md
// 2. Palindrome Permutation

#include<iostream>
#include<string>
#include<unordered_map>

using namespace std;


int main(){
    string str;
    cout<<"Enter string: ";
    getline(cin , str);
    unordered_map<char , int> freq;

    for(int i = 0 ; i < str.length();i++){
        if (freq.find(str[i]) == freq.end()){
            freq[str[i]] = 0;
        }
        freq[str[i]] ++;
    }

    bool odd = false;
    for(const auto& pair : freq){
        char frequency = pair.second;
        if(frequency % 2 != 0){
            if(odd){
                cout<<"given string can't form a palidrome.."<<endl;
                return 0;
            }
            else{
                odd = true;
            }
        }
    }
    
    cout<<"given string can form a palindrome.."<<endl;
} 