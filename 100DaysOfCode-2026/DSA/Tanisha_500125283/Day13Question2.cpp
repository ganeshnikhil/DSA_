//  Problem Statement: Given a string, determine if any permutation (rearrangement) of the string can form a palindrome. You 
// don't need to generate the palindrome, just check if it's possible. For a string to form a palindrome, at most 
// one character can have an odd frequency.
//  Task: Check if any permutation of a string can form a palindrome.
//  Examples Input: "aab"
//  Output: true


#include<bits/stdc++.h>
using namespace std;
bool Palindrome(const string& input) {
    unordered_map<char, int> freqMap;
    for (char ch : input) {
        freqMap[ch]++;
    }

    int oddCount = 0;
    for (auto pair : freqMap) {
        if (pair.second % 2 != 0) {
            oddCount++;
            if (oddCount > 1) {
                return false;
            }
        }
    }

    return true;
}

int main() {
    string input = "aab";
   

    cout << boolalpha;  //prints true or false
    cout << Palindrome(input) << endl;  
    return 0;
}
