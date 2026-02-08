// day6.md
// 3. Find the Length of the Longest Consecutive Increasing Subarray

#include<iostream>
#include<vector>

using namespace std;



int main(){
    vector<int> arr;
    int size , value;

    cout<<"Enter size of array: ";
    cin>>size;

    for(int i = 0 ; i < size ; i++){
        cin>>value;
        arr.push_back(value);
    }
    int longets_sequnce = 0;


    for(int i = 0 ; i < size ; i++){
        int counter = 1;
        for(int j = i  ; j < size - 1 ; j++){
            if(arr[j+1] != arr[j]+1){
                break;
            }
            counter++;
        }
        if(counter > longets_sequnce){
            longets_sequnce = counter;
        }
    }
    
    cout<<"Longest sequence : "<<longets_sequnce<<endl;
    return 0;
}