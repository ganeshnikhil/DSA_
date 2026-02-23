// day30.md
// 1. Clear the i-th Bit of a Number

#include<iostream>

using namespace std;

int main(){
    int n;
    int idx;


    cout<<"Enter the number: ";
    cin>>n;

    cout<<"Enter the index (0-based): ";
    cin>>idx;

    int invert_mask = ~(1 << idx);
    int result = n & invert_mask;
    cout<<"Result after clearing bit "<<idx<<" = "<<result<<endl;
}


