#include<iostream>
#include <algorithm>
#include <unordered_map>
using namespace std;

bool checkAnagram (string &a,string &b,unordered_map<char,int>&freq1,     unordered_map<char,int>&freq2){
 if(a.length()!=b.length()) return false;

 for(int i=0;i<a.length();i++){
    if(a[i]!=' ') freq1[a[i]]++;
    if(b[i]!=' ') freq2[b[i]]++;
 }
  return freq1==freq2;
 
}

int main() {
    unordered_map<char,int>freq1;
    unordered_map<char,int>freq2;
 
    string a;
   cout<<"Enter the first word:"<<" ";
    getline(cin,a);
       string b;
   cout<<"Enter the second word:"<<" ";
    getline(cin,b);
   if(checkAnagram(a,b,freq1,freq2)) cout<<"Yes both words are valid anagrams";
   else cout<<"Not they are not anagarams";
  
    return 0;
}