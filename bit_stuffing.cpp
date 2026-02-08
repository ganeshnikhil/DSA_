// day23.md
//4. Bit Stuffing in a Stream of Bits

#include<iostream>
#include<string>


using namespace std;


int main(){
    string str;
    string pattern;

    cout<<"Enter string: ";
    cin>>str;

    cout<<"pattern:";
    cin>>pattern;

    int string_len = str.length();
    int start = 0;
    string stuffed_string = "";

    int p_i = 0;
    int pattern_size = pattern.length();
    while(start <= string_len){
        if(str[start] == pattern[p_i]){
            p_i++;
        }
        else{
            p_i = 0; // reset pattern index (not match reset)
        }
        stuffed_string += str[start]; 
        if(p_i == pattern_size){ // pattern completely match
            stuffed_string += '0'; // add stuffing
            p_i = 0; // resest pattern index
        }
        start += 1;
    }
    cout<<stuffed_string<<endl;
}