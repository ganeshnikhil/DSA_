// day17.md
// 3. square root using binary search


#include<iostream>

using namespace std;

int main(){
    int num;

    cout<<"Enter size of array: ";
    cin>>num;
    
    int left = 0;
    int right = num - 1;
    bool found = false;
    int ans = -1;
    while(left <= right){
        int mid = left + (right - left)/2; // for trancuation (in bound)
        int square = mid * mid;
        
        if(square == num){  
            cout<<"square root is "<<mid<<endl;
            found = true;
            break;
        }
        else if(square  > num){
            right = mid-1;
        }
        else{
            ans = mid;    
            left = mid + 1;
        }
    }

    if(!found){
        cout<<"closet square root is "<<ans<<endl;
    }

}

