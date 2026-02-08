// day16.md
// 2. Count Occurrences


#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<int> arr;
    int size , input , target;

    cout<<"Enter size of array: ";
    cin>>size;

    for(int i = 0 ;i < size ; i++){
        cin>>input;
        arr.push_back(input);
    }

    cout<<"Target to find: ";
    cin>>target;

    int count = 0;
    for(int idx = 0 ; idx < size ; idx++){
        if(arr[idx] == target){
            count ++;
        }
    }

    cout<<target<<" freqency in array is "<<count<<endl;

}