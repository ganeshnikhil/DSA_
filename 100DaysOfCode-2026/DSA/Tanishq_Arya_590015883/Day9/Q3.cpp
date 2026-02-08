#include <iostream>
using namespace std;

int findFirstUniqueChar(const string& input) {
    const int SIZE = 256; 
    int freq[SIZE] = {0};
    
    for (char c : input) {
        freq[(unsigned char)c]++;
    }

    for (int i = 0; i < input.length(); ++i) {
        if (freq[(unsigned char)input[i]] == 1) {
            return i;  
        }
    }

    return -1; 
}

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    int index = findFirstUniqueChar(str);

    if (index == -1) {
        cout << "-1" << endl;
    } else {
        cout<< str[index]<< endl;
    }

    return 0;
}
