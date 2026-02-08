#include <iostream>
#include <string>
using namespace std;

string compressString(string& input) {
    if (input.empty()) 
    return "";

    string compressed;
    int count = 1;

    for (int i = 1; i <= input.length(); ++i) {
        if (i < input.length() && input[i] == input[i - 1]) 
        {
            count++;
        } 
        else 
        {
            compressed += input[i - 1];
            compressed += to_string(count);
            count = 1;
        }
    }

    return compressed.length() < input.length() ? compressed : input;
}

int main() {
    string input;
    cin >> input;
    string output = compressString(input);

    cout << output << endl;
}
