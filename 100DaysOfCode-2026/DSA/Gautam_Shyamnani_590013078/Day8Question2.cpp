#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    cout<<"Enter the string: ";
    getline(cin,str);
    char target;
    cout<<"Enter the character you want to count: ";
    cin>>target;
    int count=0;
    for(char ch: str){
        if(target==ch){
            count++;
        }
    }
    cout<<count<<endl;
    return 0;
}
