// day5.md
// 2. Find the Missing Number

#include<iostream>
#include<vector>



using namespace std;

int main(){
    int size , value;
    vector<int> arr;

    cout<<"Enter size: ";
    cin>>size;

    for(int i = 0 ; i < size ; i++){
        cin>>value;
        arr.push_back(value);
    }

    int total_sum = 0;
    int arr_sum = 0;
    for(int i = 0 ; i <= size ; i++){
        total_sum += i;
    }

    for(int j = 0 ; j < size ; j++){
        arr_sum += arr[j];
    }

    cout<<"Missing numbers is : "<<total_sum - arr_sum<<endl;


}