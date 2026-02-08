// day10.md
// 3. Check Anagram


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
    getline(cin, str1); 


    cout<<"Enter string one : ";
    getline(cin, str2); 
    
    
    if(str1.length() !=  str2.length()){
        cout<<"False"<<endl;
        return 0;
    }
    
    string str1_copy = str1;
    string str2_copy = str2;
    sort(str1.begin() , str1.end() , comparechar);
    sort(str2.begin() , str2.end() , comparechar);



    for(int i = 0 ; i < str1.length() ; i++){
        char one = tolower(str1[i]);
        char two = tolower(str2[i]);
        if(one != two){
            cout<<"False"<<endl;
            return 0;
        }
    }

    cout<<"True"<<endl;
    return 0;
}