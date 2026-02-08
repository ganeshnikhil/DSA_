// day3.md
// 3. Find the Second Largest Element

#include<iostream>
#include<vector>


using namespace std;

int main(){
    vector<int> arr;
    int size , value;
    int mx = INT_MIN;
    int second_max = INT_MIN;

    cout<<"Enter size: ";
    cin>>size;


    for(int i = 0 ; i < size ; i++){
        cin>>value;
        arr.push_back(value);
    }

    for (int i = 0; i < size; i++) {
        if (arr[i] > mx) {
            second_max = mx;
            mx = arr[i];
        }
        else if (arr[i] > second_max && arr[i] < mx) {
            second_max = arr[i];
        }
    }

    if(second_max == mx || second_max == INT_MIN){
        cout<<"-1"<<endl;
    }
    else{
        cout<<"second max: "<<second_max<<endl;
    }
}