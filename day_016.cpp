// day6.md
// 1. Find Duplicates in Array

#include <vector>
#include<iostream>
using namespace std;

int findDuplicate(vector<int>& nums) {
    int slow = nums[0];
    int fast = nums[0];

    // Phase 1: Detect cycle
    do {
        slow = nums[slow];
        fast = nums[nums[fast]];
    } while (slow != fast);

    // Phase 2: Find entry point
    slow = nums[0];
    while (slow != fast) {
        slow = nums[slow];
        fast = nums[fast];
    }

    return slow;
    
}



int main(){
    vector<int> arr;
    int size , value;

    cout<<"Size of array: ";
    cin>>size;

    for(int i = 0 ; i < size ; i++){
        cin>>value;
        arr.push_back(value);
    }
    int dup = findDuplicate(arr);
    cout<<dup<<endl;
}