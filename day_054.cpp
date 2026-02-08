// day20.md
// 3. Kth Largest Element



#include <iostream>
#include <queue>
using namespace std;

int main() {
    int size , input , k;
    priority_queue<int> maxHeap;

    cout<<"Enter size: ";
    cin>>size;
    
    cout<<"Kth max: ";
    cin>>k;

    for(int i = 0 ;i < size ; i++){
        cin>>input;
        maxHeap.push(input);
    }

    if(k > size){
        cout<<"Invalid request"<<endl;
        return 0;
    }
    int kthmax = -1;
    for(int i = 0 ; i < k ; i++){
        kthmax = maxHeap.top();
        maxHeap.pop();
        
    }

    if(kthmax == -1){
        cout<<"Not found ..";
        cout<<endl;
        return 0;
    }
    
    cout<<k<<"th largest element is "<<kthmax<<endl;
    return 0;
}


