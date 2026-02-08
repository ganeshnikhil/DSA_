// day10.md
// 1. String Comparison

// check anagram
#include<iostream>
#include<string>
#include<algorithm>

using namespace std;


bool comparechar(char a , char b){
    return (tolower(a) - '0') > (tolower(b) - '0');
}

int main(){
    string str1;
    string str2;
    
    cout<<"Enter string one : ";
    cin>>str1;
    
    cout<<"Enter string one : ";
    cin>>str2;
    

    if(str1.length() !=  str2.length()){
        cout<<"Not eual, "<<"Not equal ignoring case, "<<str1<<" comes before "<<str2<<endl;
        return 0;
    }
    
    string str1_copy = str1;
    string str2_copy = str2;
    sort(str1.begin() , str1.end() , comparechar);
    sort(str2.begin() , str2.end() , comparechar);


    int flag_equal = 1;
    int flag_case = 1;

    for(int i = 0 ; i < str1.length() ; i++){
        if(str1[i] != str2[i]){
            cout<<"Not equal, ";
            flag_equal = 0;
            break;
        }
    }
    

    if(flag_equal){
        cout<<"Equal, ";
    }
    

    for(int i = 0 ; i < str1.length() ; i++){
        char one = tolower(str1[i]);
        char two = tolower(str2[i]);
        if(one != two){
            cout<<"Not Equal ignoring case, ";
            flag_case = 0;
            break;
        }
    }

    if(flag_case){
        cout<<"Equal ignoring case, ";
    }

    cout<<str1_copy<<" comes before "<<str2_copy<<endl;
}