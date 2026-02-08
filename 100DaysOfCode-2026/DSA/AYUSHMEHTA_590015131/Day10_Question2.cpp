#include<iostream>
#include <algorithm>
using namespace std;

void removeSpaces (string &a){
 int n= a.length();
 string result="";
 for( char c:a){
    if(c!=' ')result+=c;
 }
  a= result;
 cout<<"The string after removing space is:"<<" "<<a;
    
}

int main() {
    string a;
   cout<<"Enter the input word:"<<" ";
    getline(cin,a);
  removeSpaces(a);
    return 0;
}
