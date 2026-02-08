// day3.md
// 2. Check for Duplicates

#include<iostream>
#include<vector>
#include<set>


using namespace std;

int main(){
    vector<int> arr;
    int size;
    int value;
    cout<<"Enter the size of arr: ";
    cin>>size;

    for(int i = 0 ; i < size ; i++){
        cin>>value;
        arr.push_back(value);
    }

    set<int> s1{arr.begin(), arr.end()};

    if(s1.size() != size){
        cout<< "true"<<endl;
    }
    else{
        cout << "false"<<endl;
    }
}