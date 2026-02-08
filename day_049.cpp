// day19.md
// 1. Search in Rotated Array

#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<int> arr;
    int size , input;


    cout<<"Enter size: ";
    cin>>size;

    for(int i = 0 ; i < size  ; i++){
        cin>>input;
        arr.push_back(input);
    }

    int left = 0;
    int right = size - 1;
    int target = 0;

    while(left < right){
        int mid = (left+right)/2;

        if (arr[mid] == target){
            return mid;
        }

        // Check which half is sorted
        if (arr[low] <= arr[mid]) { // Left half sorted
            if (target >= arr[low] && target < arr[mid])
                high = mid - 1; // Target in left half
            else
                low = mid + 1;  // Target in right half
        } else { // Right half sorted
            if (target > arr[mid] && target <= arr[high])
                low = mid + 1;  // Target in right half
            else
                high = mid - 1; // Target in left half
        }
    }
}