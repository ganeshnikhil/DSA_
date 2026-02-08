// day5.md
// 1. Find the Unique Element

#include<iostream>
#include<vector>

using namespace std;

int main(){
    int size , value;
    vector<int> arr;
    int zor;
    cout<<"Enter the size of array: ";
    cin>>size;

    for(int i = 0 ; i < size ; i++){
        cin>>value;
        arr.push_back(value);
    }
    
    zor = arr[0];
    for(int j=1 ; j < size ; j++){
        zor^=arr[j];
    }

    cout<<"Unique element is :"<<zor<<endl;
}