#include<iostream>
#include <algorithm>
using namespace std;

bool compareTwoStrings(string &a,string &b){
    if(a.length()!=b.length()) return false;
    int start=0;
    while(start<a.length()){
    if(a[start]!=b[start]) return false;
     start++;
    }
    return true;
}

int main() {
    string a;
   cout<<"Enter the first word:"<<" ";
    getline(cin,a);
        string b;
    cout<<"Enter the second word:"<<" ";
   getline(cin,b);
   if(!compareTwoStrings(a,b)) cout<< "No, both strings  are different ";
   else{
       cout<<". Yes, both strings are equal ";
   }
  
    return 0;
}