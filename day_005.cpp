// day2.md
// 2. Find First and Last Element

#include<iostream>

using namespace std;


int main(){
    vector<int> arr;
    int size , value;

    for(int i=0 ; i < size ; i++){
        cin>>value;
        arr.push_back(value);
    }

    cout<<"First :"<<arr[0]<<endl;
    cout<<"last :"<<arr[size-1]<<endl;
}