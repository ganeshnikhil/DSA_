// day11.md
// 2. Longest Palindromic Substring 

#include<iostream>
#include<string>
#include<vector>


using namespace std;


int main(){
    string str;

    cout<<"Enter string: ";
    getline(cin , str);

    vector<string> string_arr;

    for(int i = 0 ; i < str.length() ; i++){
        string sub_string = "";
        for(int j = i ; j < str.length() ; j++){
            sub_string = sub_string + str[j];
            if(sub_string.length() >= 2){
                string_arr.push_back(sub_string);
            }
        }
    }
    
    int max_size = INT_MIN;
    string final = "No lonegest substring palindrome found..";


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

        if(flag && len_sub_str > max_size){
            final = sub_str;
            max_size = len_sub_str;
        }
    }

    cout<<final<<endl;
    return 0;
}