// day10.md
// 2. Remove Spaces

#include<iostream>
#include<vector>
#include<string>

using namespace std;

// Your existing remove_all
string remove_all(string str){
    string new_str = "";
    for(int i = 0 ; i < str.length();i++){
        if(str[i] != ' '){
            new_str = new_str + str[i];
        }
    }
    return new_str;
}

// Your existing trim
string trim(string str){
    int start = 0;
    int end = str.length()-1;
    string new_str = "";
    while(start < end){
        if(str[start] != ' ' && str[end] != ' '){
            break;
        }
        else{
            if(str[start] == ' '){
                start ++;
            }
            if(str[end] == ' '){
                end--;
            }
        }
    }
    for(int i = start ; i <= end ; i++){
        new_str = new_str + str[i];
    }
    return new_str;
}

// Your existing single_space
string single_space(string str){
    string trimmed = trim(str);
    string new_str = "";

    int len = trimmed.length();

    for(int i = 0 ; i < len ; i++){
        int spaces = 0;
        while(i < len && trimmed[i] == ' '){
            i++;
            spaces++;
        }
        if (i >= len) break;

        if(spaces > 0){
            new_str += ' ';
            new_str += trimmed[i];
        }
        else{
            new_str = new_str + trimmed[i];
        }
    }
    return new_str;
}

int main(){
    string str;
    cout<<"Enter string: ";
    getline(cin, str); 

    cout << "\n=== String Cleaning Operations ===\n";
    
    // 1. Remove all spaces
    string removed_all = remove_all(str);
    cout << "Remove all spaces: \"" << removed_all << "\"\n";

    // 2. Trim leading and trailing spaces
    string trimmed = trim(str);
    cout << "Trimmed: \"" << trimmed << "\"\n";

    // 3. Single space normalization
    string single_spaced = single_space(str);
    cout << "Single-spaced: \"" << single_spaced << "\"\n";

    return 0;
}
