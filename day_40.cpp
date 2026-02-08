// day16.md
// 1. Linear Search

#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<int> arr;
    int size , input , target;

    cout<<"Enter size of array: ";
    cin>>size;

    for(int i = 0 ;i < size ; i++){
        cin>>input;
        arr.push_back(input);
    }

    cout<<"Target to find: ";
    cin>>target;

    for(int idx = 0 ; idx < size ; idx++){
        if(arr[idx] == target){
            cout<<"Found at index "<<idx+1<<endl;
            break;
        }
    }

}