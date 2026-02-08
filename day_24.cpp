// day9.md
// 3. Find First Non-Repeating Character

#include<iostream>
#include<vector>
#include<string>

using namespace std;


int main(){
    string str;


    cout<<"Enter string: ";
    cin>>str;

    int len = str.length();
    for(int i = 0 ; i < len ; i++){
        char str_char = str[i];
        int flag = 1;
        for(int j = 0 ; j < len ; j++){
            if(str[j] == str_char && i != j){
                flag = 0;
                break;
            }
        }
        if(flag){
            cout<<str_char<<endl;
            return 0;
        }
    }

    cout<<"-1"<<endl;
}