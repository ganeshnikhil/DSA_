// day1.md
// 3. Sum of Array Elements

#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector<int> nums;
    int size;
    int value;
    int sum = 0;
    cout<<"Size of vector: ";
    cin>>size;

    cout<<"Enter elements in vector "<<endl;
    for(int i = 0 ; i < size ; i++){
        cin>>value;
        nums.push_back(value);
    }
    
    for(int i = 0 ; i < nums.size() ; i++){
        sum += nums[i];
    }
    
    cout<<"Total sum : "<<sum<<endl;
}
