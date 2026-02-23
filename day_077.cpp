// day30.md
// 2. Toggle the i-th Bit of a Number

#include<iostream>

using namespace std;

int main(){
    int n;
    int idx;

    cout<<"Enter number n: ";
    cin>>n;

    cout<<"Enter the (0) index: ";
    cin>>idx;

    int mask = 1<<idx;
    int result = n ^ mask;
    cout<<"After toogle index "<<idx<<" result is "<<result<<endl;

}