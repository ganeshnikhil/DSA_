// day29.md
// 3. Set the i-th Bit of a Number

#include<iostream>

using namespace std;

int main(){
    int n;
    int idx;


    cout<<"Enter the number: ";
    cin>>n;

    cout<<"Enter the index: ";
    cin>>idx;

    int mask = 1 << idx;
    int after_set = n | mask;
    cout<<"After setting the "<<idx<<" num is "<<after_set<<endl;
}