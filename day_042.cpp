// day16.md
// 3. Find First and Last Occurrence

#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<int> arr;
    int size , input;

    cout<<"Enter size of arr: ";
    cin>>size;

    for(int i = 0 ;i < size ; i++){
        cin>>input;
        arr.push_back(input);
    }

    int max = INT_MIN;

    for(int num : arr ){
        if(num > max){
            max = num;
        }
    }
    cout<<"Maximum element in array is "<<max<<endl;
}