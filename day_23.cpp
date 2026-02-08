// day9.md
// 2. Count Vowels and Consonants

#include<iostream>
#include<vector>
#include<string>


using namespace std;


int main(){
    string str;
    char arr[] = {'a','e','i','o','u'};
    int no_of_vowels = 5;
    int vowels = 0;
    int consonants = 0;
    cout<<"Enter string ";
    cin>>str;
    int len = str.length();
    for(int i = 0 ; i < len  ; i++){
        int is_vowel = 0;
        char a = tolower(str[i]);
        if (a >= 'a' && a <= 'z'){
            for(int j = 0 ; j < no_of_vowels ; j++ ){
                if( arr[j] == a){
                    is_vowel = 1;
                }
            }
            if(is_vowel){
                vowels ++;
            }
            else{
                consonants ++;
            }
        }
    }

    cout<<"vowels : "<<vowels<<" consonants: "<<consonants<<endl; 
}