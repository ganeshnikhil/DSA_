// day8.md
// 3. Reverse a String

#include<iostream>
#include<vector>
#include<string>


using namespace std;


int main(){
    string str;

    cout<<"Enter string ";
    cin>>str;
    int len = str.length();
    for(int i = 0 ;i < (len/2)  ; i++){
        char temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
    }

    for(char a : str){
        cout<<a;
    }
    cout<<endl;
}