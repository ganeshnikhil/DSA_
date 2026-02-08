// day8.md
// 1. String Length and Basics

#include<iostream>
#include<string>
#include<vector>


using namespace std;


int main(){
    string str;

    cout<<"Enter string: "<<endl;
    cin>>str;

    int len = str.length();

    for(int i = 0 ; i < len ; i++){
        if(str[i] >=  'a' && str[i] <=  'z'){
            int k =  (str[i] - 'a') % 26;
            str[i] = 'A' + k;
        }
    }

    cout<<"upper case string: "<<endl;
    for(char val : str){
        cout<<val;
    }
    cout<<endl;
}