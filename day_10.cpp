// day4.md
// 1. Find the Minimum Element

#include<iostream>
#include<vector>

using namespace std;
int main(){
    int MIN = INT_MAX;
    int size , value;
    vector<int> arr;

    cout<<"Enter size of array: ";
    cin>>size;

    for(int i = 0 ; i < size ; i++){
        cin>>value;
        arr.push_back(value);
    }

    for(int j = 0 ; j < size ; j++){
        if(arr[j] < MIN){
            MIN = arr[j];
        }
    }
    cout<<"Minum element in given array is "<<MIN<<endl;
    return 0;
}