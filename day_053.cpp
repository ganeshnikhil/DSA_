// day20.md
// 2. Merge Two Sorted Arrays

#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<int> arr1 , arr2;
    int size1 , size2 , input;

    cout<<"Enter size of array 1: ";
    cin>>size1;

    cout<<"Enter size of array 2: ";
    cin>>size2;

    cout<<"Array one sorted inputs: "<<endl;
    for(int i = 0 ; i < size1 ; i++){
        cin>>input;
        arr1.push_back(input);
    }

    cout<<"Array two sorted inputs: "<<endl;
    for(int i = 0 ; i < size2 ; i++){
        cin>>input;
        arr2.push_back(input);
    }

    int left = 0;
    int right = 0;
    vector<int> final;
    while(left < size1 && right < size2){
        if(arr1[left] < arr2[right]){
            final.push_back(arr1[left]);
            left++;
        }
        else if(arr2[right] < arr1[left]){
            final.push_back(arr2[right]);
            right++;
        }
        else{
            final.push_back(arr1[left]);
            final.push_back(arr2[right]);
            left++;
            right++;
        }
    }

    if(left < size1){
        for(int i = left ; i < size1 ; i++){
            final.push_back(arr1[i]);
        }
    }
    else if(right < size2){
        for(int i = right ; i < size2 ; i++){
            final.push_back(arr2[i]);
        }
    }
    
    cout<<"Sorted merged array:"<<endl;
    for(int num : final){
        cout<<num<<" ";
    }
    cout<<endl;

}