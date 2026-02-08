// day3.md
// 1. K-Frequency Element Sum

#include<iostream>
#include<set>
#include<vector>


using namespace std;


int main(){
    vector<int> arr;
    int size , value;
    int k;
    int total_sum = 0;

    cout<<"Enter size: ";
    cin>>size;


    for(int i=0 ;i < size;i++){
        cin>>value;
        arr.push_back(value);
    }
    

    cout<<"enter the k: ";
    cin>>k;

    // uniquely store all elements
    set<int> s1{arr.begin(), arr.end()};

    // loop over the unique elements
    for(int num : s1){

        int count = 0;

        for(int j = 0 ; j < size ; j++){
            if(num == arr[j]){
                count ++;
                if(count > k){
                    break;
                }
            }
        }
        if(count == k){
            total_sum += num;
        }

    }
    cout<<"Total sum of "<<k<<" repeated element is : "<<total_sum<<endl;
}



