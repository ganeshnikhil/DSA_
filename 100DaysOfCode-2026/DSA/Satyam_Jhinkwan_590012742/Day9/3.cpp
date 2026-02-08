#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

int main()
{
    string str;
    cout << "Enter a string: ";
    getline(cin, str); // qn didn't mention to ignore number or anything from the input so it will also check for numbers or anything else
    unordered_map<char, int> freq;
    for (char c : str)
        freq[c]++;
    for (char c : str)
    {
        if (freq[c] == 1)
        {
            cout << "'" << c << "'";
            return 0;
        }
    }
    cout << "-1";
    return 0;
}