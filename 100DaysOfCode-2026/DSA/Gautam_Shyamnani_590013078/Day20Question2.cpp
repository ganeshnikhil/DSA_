#include <iostream>
#include <vector>

std::vector<int> mergeSortedArrays(const std::vector<int>& arr1, const std::vector<int>& arr2) {
    std::vector<int> merged;
    int i = 0, j = 0;

    
    while (i < arr1.size() && j < arr2.size()) {
        if (arr1[i] < arr2[j]) {
            merged.push_back(arr1[i++]);
        } else {
            merged.push_back(arr2[j++]);
        }
    }

    
    while (i < arr1.size()) {
        merged.push_back(arr1[i++]);
    }
    while (j < arr2.size()) {
        merged.push_back(arr2[j++]);
    }

    return merged;
}

int main() {
   
    std::vector<int> array1 = {1, 5, 9, 10};
    std::vector<int> array2 = {2, 3, 8, 13};

    
    std::vector<int> result = mergeSortedArrays(array1, array2);

    for (int num : result) {
        std::cout << num << " ";
    }

    return 0;
}
