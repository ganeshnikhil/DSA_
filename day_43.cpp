// day17.md
// 1. Binary Search Implementation

#include<iostream>
#include<vector>


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

    
    int left = 0;
    int right = size - 1;
    bool found = false;

    while(left <= right){
        int mid = left + (right - left)/2; // for trancuation (in bound)
        if(arr[mid] == target){
            cout<<"Found at index "<<mid<<endl;
            found = true;
            break;
        }
        else if(arr[mid] > target){
            right = mid-1;
        }
        else{
            left = mid + 1;
        }
    }

    if(!found){
        cout<<" Target value dosen't exist in array"<<endl;
    }

}