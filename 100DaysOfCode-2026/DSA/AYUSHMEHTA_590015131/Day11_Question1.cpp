#include <iostream>
#include <string>
#include <cctype>
using namespace std;

bool isPalindrome(string &str){
    string a="";
    for(char ch:str){
    if(isalnum(ch)){
     a+=tolower(ch);
    }
}
    int start=0,end=a.size()-1;
    while(start<end){
     if(a[start]!=a[end]) return false;
     start++;
     end--;
    }
    return true;


}



int main() {
    string str;
    cout<<"Enter the input to check"<<" ";
    getline(cin,str);
    if(isPalindrome(str)){
        cout << "true\n";
    } else {
        cout << "false\n";
    }
    
    return 0;
}