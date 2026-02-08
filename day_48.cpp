// day18.md
// 3. Sort Colors (Dutch Flag)

#include<iostream>
#include<vector>
#include<algorithm>

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

    int left = 0; // 1
    int mid = 0; // 2
    int right = size - 1; // 3

    while(mid <= right){
        if(arr[mid] == 1){
            swap(arr[left] , arr[mid]);
            left++;
            mid++;
        }

        if(arr[mid] == 2){
            mid++;
        }
        else{ //  arr[mid] == 3
            swap(arr[mid]  , arr[right]);
            right--;
        }
    }

    for (int x : arr) {
        cout << x << " ";
    }
    cout<<endl;
    return 0;
}




