#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string removeAllSpaces(const string &str)
{
    string result = "";
    for (char c : str)
        if (c != ' ')
            result += c;
    return result;
}

string trim(const string &str)
{
    int start = 0, end = str.length() - 1;
    while (start <= end && str[start] == ' ')
        start++;

    while (end >= start && str[end] == ' ')
        end--;

    return str.substr(start, end - start + 1);
}

string removeExtraSpaces(const string &str)
{
    string trimed = trim(str);
    string res;
    bool space = false;
    for (char c : trimed)
    {
        if (c == ' ')
        {
            space = true;
        }
        else
        {
            if (space && !res.empty())
                res += ' ';
            res += c;
            space = false;
        }
    }
    return res;
}

int main()
{
    string input;
    cout << "Enter a string: ";
    getline(cin, input);

    cout << "Remove all: \"" << removeAllSpaces(input) << "\"" << endl;
    cout << "Trim: \"" << trim(input) << "\"" << endl;
    cout << "Single spaces: \"" << removeExtraSpaces(input) << "\"" << endl;

    return 0;
}
