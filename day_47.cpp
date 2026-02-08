// day18.md
// 2. Insertion Sort

#include<iostream>
#include<vector>


using namespace std;


int main(){
    vector<int> arr;
    int size;
    int input;


    cout<<"Enter size of array: ";
    cin>>size;

    for(int i = 0 ; i < size ; i++){
        cin>>input;
        arr.push_back(input);
    }
    
    // 1 to 5
    // 0 to 1
    // 0 to 2
    // 0 to 3

    for (int j = 1; j < size; j++) {
        int key = arr[j];
        int k = j - 1;

        while (k >= 0 && arr[k] > key) {
            arr[k + 1] = arr[k];  // shift right
            k--;
        }

        arr[k + 1] = key;        // insert in gap
    }



    for(int num : arr){
        cout<<num<<" ";
    }
    cout<<endl;
}

