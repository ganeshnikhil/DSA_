// day18.md
// 1. Selection Sort

#include<iostream>
#include<vector>

using namespace std;


int main(){
    vector<int> arr;
    int size;
    int input;


    cout<<"Enter size of array: ";
    cin>>size;

    for(int i = 0 ; i < size ; i++){
        cin>>input;
        arr.push_back(input);
    }
    

    for(int j = 0 ; j < size-1 ; j++){
        int min_idx = j;
        for(int k=j ; k < size ; k++){
            if(arr[k] < arr[min_idx]){
                min_idx = k;
            }
        }

        // swap only if needed
        if(min_idx != i){
            int temp = arr[j];
            arr[j] = arr[min_idx];
            arr[min_idx] = temp;
        }
    }


    for(int num : arr){
        cout<<num<<" ";
    }
    cout<<endl;
}

