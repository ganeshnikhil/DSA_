#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    int target;
    cin >> target;

    int low = 0, high = n-1;
    int index = -1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == target) 
        {
            index = mid;    
            high = mid - 1;   
        } 
        else if (arr[mid] < target) 
        {
            low = mid + 1;     
        } 
        else 
        {
            high = mid - 1;  
        }
    }
    
    if (index != -1)
        cout << index << endl;
    else
        cout << "Target not found in the array." << endl;
}
