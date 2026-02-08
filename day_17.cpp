// day6.md
// 2. Check if Array is Fully Increasing

#include<iostream>
#include<vector>

using namespace std;



int main(){
    vector<int> arr;
    int size , value;

    cout<<"Enter size of array: ";
    cin>>size;

    for(int i = 0 ; i < size ; i++){
        cin>>value;
        arr.push_back(value);
    }

    for(int i = 0 ; i < size - 1 ; i++){
        if(arr[i] >= arr[i+1]){
            cout<<"False"<<endl;
            return 0;
        }
    }
    cout<<"True"<<endl;
    return 0;
}