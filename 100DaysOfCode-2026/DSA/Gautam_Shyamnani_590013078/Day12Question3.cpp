#include <iostream>
using namespace std;

string compressString(const string& input) {
    string compressed = "";
    int count = 1;

    for (size_t i = 0; i < input.length(); ++i) {
       
        while (i + 1 < input.length() && input[i] == input[i + 1]) {
            count++;
            i++;
        }

        compressed += input[i] + to_string(count);
        count = 1; 
    }

    return (compressed.length() < input.length()) ? compressed : input;
}

int main() {
    string input;
    cout << "Enter a string: ";
    cin >> input;

    string output = compressString(input);
    cout << "Compressed string: " << output << endl;

    return 0;
}
