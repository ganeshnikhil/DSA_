// day11.md
// 1. Palindrome Ignoring Spaces and Punctuation

#include<iostream>
#include<string>

using namespace std;


int main(){
    string str;
    cout<<"Enter string: ";
    getline(cin, str); 

    int left = 0;
    int right = str.length() - 1;
    while(left < right){

        str[left] = tolower(str[left]);
        str[right] = tolower(str[right]);

        if(!isalnum(str[left])){
            left ++;
        }

        else if(!isalnum(str[right])){
            right --;
        }
        else{
            if(str[left] != str[right]){
                cout<<"False"<<endl;
                return 0;
                
            }
            else{
                left ++;
                right --;
            }
        }
    }

    cout<<"True"<<endl;
}