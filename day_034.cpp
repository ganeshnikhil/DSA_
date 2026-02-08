// day13.md
// 1. Word Count
#include <iostream>
#include <string>
#include <vector>
#include <climits>

using namespace std;

string trim(string str){
    int start = 0;
    int end = str.length() - 1;
    string new_str = "";

    while(start < end){
        if(str[start] != ' ' && str[end] != ' ')
            break;
        if(str[start] == ' ')
            start++;
        if(str[end] == ' ')
            end--;
    }

    for(int i = start; i <= end; i++){
        new_str += str[i];
    }
    return new_str;
}

int main(){
    string str;
    cout << "Enter string: ";
    getline(cin, str);

    int idx = 0;
    string trimmed_str = trim(str);
    int len = trimmed_str.length();

    int max_len = 0;
    string longest_word = "";
    string sub_str = "";
    int word_count = 0;

    while(idx < len){

    while (idx < len && trimmed_str[idx] == ' ') {

        if(!sub_str.empty()){
            word_count++;   // ✅ count word here

            if(sub_str.length() > max_len){
                longest_word = sub_str;
                max_len = sub_str.length();
            }
            sub_str = "";
        }
        idx++;
    }

    if (idx < len) {
        sub_str += trimmed_str[idx];
        idx++;
    }
}

// ✅ FINAL CHECK FOR LAST WORD
if(!sub_str.empty()){
    word_count++;   // ✅ count last word

    if(sub_str.length() > max_len){
        longest_word = sub_str;
        max_len = sub_str.length();
    }
}

cout << "word count : " << word_count
     << " Longest word : " << longest_word << endl;

}
