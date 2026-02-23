// day29.md
// 2. Get the i-th Bit of a Number

#include<iostream>


using namespace std;


int main(){
    int n;
    int idx;

    cout<<"Enter n: ";
    cin>>n;

    cout<<"Enter index: ";
    cin>>idx;

    int mask = 1<<idx;
    int bit = n & mask;
    cout<<"bit at "<<idx<<" is "<<bit<<endl;
}
