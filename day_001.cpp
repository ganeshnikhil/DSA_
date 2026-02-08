// day1.md
// 1. Replace All Negative Numbers with Zero

#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> arr;
    int size , value;
    
    cout<<"Size of array: ";
    cin>>size;
    
    cout<<"Enter values in array: "<<endl;
    for(int i = 0 ; i < size ; i++){
        cin>>value;
        arr.push_back(value);
    }

    for(int i = 0 ; i < size ; i++){
        if(arr[i] < 0){
            arr[i]=0;
        }
    }
    
    for(int i = 0 ; i < size ; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;




}