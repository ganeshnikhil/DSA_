#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int main()
{
    string str;
    cout << "Enter string: ";
    getline(cin, str);

    stringstream ss(str);
    string word, longest = "";
    int count = 0;

    while (ss >> word)
    {
        count++;
        if (word.length() > longest.length())
            longest = word;
    }

    cout << "Word count: " << count << ", Longest word: '" << longest << "'";

    return 0;
}