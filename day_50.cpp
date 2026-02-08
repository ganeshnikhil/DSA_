// day19.md
// 2. Peak Element

#include<iostream>
#include<vector>

using namespace std;

int peak(vector<int>& arr, int left, int right) {
    if(left == right) return left;  // only one element, must be a peak

    int mid = (left + right)/2;

    if(mid > 0 && arr[mid] < arr[mid-1])
        return peak(arr, left, mid-1);  // peak in left half
    else if(mid < arr.size()-1 && arr[mid] < arr[mid+1])
        return peak(arr, mid+1, right); // peak in right half
    else
        return mid;  // arr[mid] is a peak
}


int main(){
    vector<int> arr;
    int size , input;


    cout<<"Enter size: ";
    cin>>size;

    for(int i = 0 ; i < size  ; i++){
        cin>>input;
        arr.push_back(input);
    }




}
