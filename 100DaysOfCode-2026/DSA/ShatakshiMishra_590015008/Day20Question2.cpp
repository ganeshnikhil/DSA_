#include <iostream>
#include <vector>
using namespace std;

vector<int> mergeSortedArrays(vector<int>& arr1, vector<int>& arr2) {
    int n = arr1.size(), m = arr2.size();
    vector<int> merged;
    int i = 0, j = 0;

    while (i < n && j < m) 
    {
        if (arr1[i] < arr2[j]) 
        {
            merged.push_back(arr1[i]);
            i++;
        } 
        else 
        {
            merged.push_back(arr2[j]);
            j++;
        }
    }

    while (i < n) 
    {
        merged.push_back(arr1[i]);
        i++;
    }

    while (j < m) 
    {
        merged.push_back(arr2[j]);
        j++;
    }

    return merged;
}

int main() {
    int n;
    cin >> n;
    vector<int> array1(n);
    for(int i=0;i<n;i++)
    {
        cin >> array1[i];
    }
    int m;
    cin >> m;
    vector<int> array2(m);
    for(int i=0;i<m;i++)
    {
        cin >> array2[i];
    }

    vector<int> result = mergeSortedArrays(array1, array2);

    for (int i=0;i<result.size();i++) 
    {
        cout << result[i] << " ";
    }
    cout << endl;

}
