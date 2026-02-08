// day12.md
// 2. Remove Duplicate Characters

#include<iostream>
#include<string>
#include <unordered_map>
#include <unordered_set>


using namespace std;


int main(){
    string str;
    unordered_set<char> seen;
    cout<<"Enter the string: ";
    getline(cin , str);


    string new_string = "";
    for(int i = 0 ; i < str.length();i++){
        if(seen.find(str[i]) == seen.end()){ // Check if char not seen before
            new_string += str[i]; // Add it to new string
            seen.insert(str[i]);
        }
    }

    cout<<new_string<<endl;
}