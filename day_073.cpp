// day29.md
// 1. Check if a Number is Even or Odd Using Bit Manipulation

#include<iostream>


using namespace std;



int main(){
    int n;
    cout<<"Enter num: ";
    cin>>n;

    if((n&1) == 0){
        cout<<"Even"<<endl;
    }
    else{
        cout<<"odd"<<endl;
    }
    return 0;
}

