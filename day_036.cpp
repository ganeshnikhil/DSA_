// day13.md
//  3. Reverse Words in String

#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main(){
    string str;
    vector<string> words;

    cout<<"Enter string: ";
    getline(cin , str);
    string sub_str = "";
    for(int i = 0 ; i < str.length();i++){
        if (str[i]  != ' '){
            sub_str += str[i];
        }
        else{
            words.push_back(sub_str);
            sub_str = "";
        }
    }
    
    if(sub_str.length() > 0){
        words.push_back(sub_str);
    }
    string reversed_string = "";
    for(int j = words.size() - 1 ; j >= 0 ; j--){
        if (j){
            reversed_string += words[j] + " ";
        }
        else{
            reversed_string += words[j];
        }
    }

    cout<<reversed_string<<endl;
}

