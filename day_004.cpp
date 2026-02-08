// day2.md
// 1. Sum of All Even Numbers

#include<iostream>

using namespace std;


int main(){
    vector<int> arr;
    int size , value;
    int sum = 0;
    cout<<"Enter value in array: "<<endl;

    for(int i=0 ; i < size ; i++){
        cin>>value;
        arr.push_back(value);
    }

    for(int i = 0 ; i < size ; i++){
        if(arr[i] % 2 == 0){
            sum += arr[i];
        }
    }
    

    cout<<"The of even number in array is"<<sum<<endl;
}