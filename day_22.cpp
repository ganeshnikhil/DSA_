// day9.md
// 1. Check Palindrome

#include<iostream>
#include<vector>
#include<string>


using namespace std;


int main(){
    string str;

    cout<<"Enter string ";
    cin>>str;
    int len = str.length();
    for(int i = 0 ;i < (len/2)  ; i++){
        char first = tolower(str[i]);
        char last = tolower(str[len - i - 1]);
        if(first != last){
            cout<<"False"<<endl;
            return 0;
        }
    }

    cout<<"True"<<endl;
    return 0;
}