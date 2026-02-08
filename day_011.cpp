// day4.md
// 2. Rotate Array by k Steps

#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<int> arr ;
    int size , value;
    int d;

    cout<<"Enter size: ";
    cin>>size;
    
    vector<int> temp(size);

    for(int i=0 ;i < size;i++){
        cin>>value;
        arr.push_back(value);
    }
    
    
    cout<<"enter the d: ";
    cin>>d;
    
    // ✅ FIX
    d = d % size;

    // last d
    // 0 -> 5 - 2 + 0 = 3
    // 1 -> 5 - 2 + 1 = 4
    for(int i = 0 ; i < d ; i++){
        temp[i] = arr[size - d + i];
    }

    // first n - d 
    // 2 - 2 = 0
    // 3 - 2 = 1
    // 4 - 2 = 2
    // 5 - 2 = 3
    for(int j = d ; j < size ; j++){
        temp[j] = arr[j - d];
    }
    

    for (int i = 0; i < size; i++){
        arr[i] = temp[i];
    }

    cout<<"After rotating by k steps"<<endl;
    for(int num : arr){
        cout<<num<<" ";
    }
    cout<<endl;
}