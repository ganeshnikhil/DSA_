// day12.md
// 3. Longest Common Substring

#include<iostream>
#include<string>
#include<unordered_map>

using namespace std;

int main(){
    string str;
    unordered_map<char , int> map;


    cout<<"Enter the string: ";
    getline(cin , str);
    
    int start = 0;
    int end = 0;
    int len = str.length() - 1;
    string new_str = "";
    while(end < len){
        char cur = str[start];
        while(cur == str[start]){ 
            end++;
            cur = str[end]; 
        }
        new_str +=  str[start] + to_string((end - start));
        start = end;
    }

    if(str.length() < new_str.length()){
        cout<<str<<endl;
    }
    else{
        cout<<new_str<<endl;
    }
}