// day15.md
// 1. Simple Array Sorting

#include<iostream>
#include<vector>
#include<algorithm>


using namespace std;


int main(){
    vector<int> nums;
    int input;
    int size;

    cout<<"size of input: ";
    cin>>size;

    for(int i = 0 ; i < size ; i++){
        cin>>input;
        nums.push_back(input);
    }

    sort(nums.begin() , nums.end());

    for(int num : nums){
        cout<<num<<" ";
    }
    cout<<endl;
}