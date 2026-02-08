// day15.md
// 3. Bubble sort implimentation 


#include<iostream>
#include<vector>


using namespace std;

int main(){
    vector<int> arr;
    int size , input;
    cout<<"Enter size: "<<endl;
    cin>>size;

    for(int i = 0 ; i < size ; i++){
        cin>>input;
        arr.push_back(input);
    }

    for(int i = 0 ; i < size ; i++){
        int swap = false;
        for(int j = 0 ; j < size - i - 1 ; j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                swap = true;
            }
        }
        if(!swap){
            cout<<"no swap needed"<<endl;
            break;
        }
    }


    for(int num:arr){
        cout<<num<<" ";
    }
    cout<<endl;

}

