// day8.md
// 2. Character Count

#include<iostream>
#include<vector>
#include<string>

using namespace std;


int main(){
    string str;
    char f;
    int count = 0;


    cout<<"Enter the string: ";
    cin>>str;


    cout<<"find the char: ";
    cin>>f;

    for(int i = 0 ; i < str.length();i++){
        if(str[i] == f){
            count ++;
        }
    }

    cout<<count<<endl;
}