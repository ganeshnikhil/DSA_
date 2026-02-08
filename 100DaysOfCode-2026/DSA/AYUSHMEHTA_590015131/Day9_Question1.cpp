#include <iostream>
#include <algorithm>
using namespace std;

bool palindromeCheck(string &s){
  int start=0;
  int end = s.size()-1;
  while(start<end){
    if(s[start]!=s[end]) return false;
    start++;
    end--;
  }
  return true;
}
int main() {
    string s;
   cout<<"Enter the string to check "<<" ";
     getline(cin, s);  
     if(palindromeCheck(s)) cout<< "Yes the given string is palindrome";
     else cout<<"No the given string is not palindrome";

    return 0;
}