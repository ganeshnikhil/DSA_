// day5.md
// 3. Check if Array is Palindrome

#include<iostream>
#include<vector>

using namespace std;


int main(){
    vector<int> arr;
    int size , value;

    cout<<"Size of array: ";
    cin>>size;

    for(int i = 0 ; i < size ; i++){
        cin>>value;
        arr.push_back(value);
    }

    for(int j = 0 ; j < (size/2) ; j++){
        if (arr[j] != arr[size - j - 1]){
            cout<<"False"<<endl;
            return 0;
        }
    }
    cout<<"True"<<endl;
    return 0;
}

