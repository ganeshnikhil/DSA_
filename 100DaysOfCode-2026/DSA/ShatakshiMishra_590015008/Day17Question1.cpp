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

    int left = 0;
    int right = n-1;
    int result = -1;
    while(left<=right)
    {
        int mid = left+(right-left)/2;
        if (arr[mid] == target) 
        {
            result = mid;
            break;
        } 
        else if (arr[mid] < target) 
        {
            left = mid++;
        } 
        else 
        {
            right = mid--;
        }
    }
    
    if (result != -1) 
    {
        cout << result << endl;
    } 
    else 
    {
        cout << "Target not found." << endl;
    }
}
