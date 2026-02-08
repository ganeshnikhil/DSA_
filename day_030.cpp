// day11.md
// 3. Count Palindromic Substrings

#include<iostream>
#include<string>
#include<vector>


using namespace std;


int main(){
    string str;

    cout<<"Enter string: ";
    getline(cin , str);

    vector<string> string_arr;
    int total_palindrome = str.length();

    for(int i = 0 ; i < str.length() ; i++){
        string sub_string = "";
        for(int j = i ; j < str.length() ; j++){
            sub_string = sub_string + str[j];
            if(sub_string.length() >= 2){
                string_arr.push_back(sub_string);
            }
        }
    }


    for(int k = 0 ; k < string_arr.size(); k++){
        string sub_str = string_arr[k];
        int len_sub_str = sub_str.length();
        int flag = 1;

        for(int p = 0 ; p < (len_sub_str/2);p++){
            if(sub_str[p] != sub_str[len_sub_str - p - 1]){
                flag = 0;
                break;
            }
        }

        if(flag){
            total_palindrome ++;
        }
    }

    cout<<total_palindrome<<endl;
    return 0;
}