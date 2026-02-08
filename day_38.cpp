// day15.md
// 2. Sort by String Length


#include<iostream>
#include<vector>
#include<algorithm>
#include<string>


using namespace std;

bool compare(string str1 , string str2){
    return str1.length() < str2.length();
}


int main(){
    vector<string> words;
    string input;
    int size;

    cout<<"size of input: ";
    cin>>size;

    for(int i = 0 ; i < size ; i++){
        cin>>input;
        words.push_back(input);
    }

    sort(words.begin() , words.end() , compare);

    for(string word : words){
        cout<<word<<" ";
    }
    cout<<endl;
}