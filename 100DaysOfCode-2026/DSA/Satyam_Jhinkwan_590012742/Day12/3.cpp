#include <iostream>
#include <string>
using namespace std;

string compress(const string &str)
{
    string compressed = "";
    int count = 1;

    for (int i = 1; i <= str.length(); i++)
    {
        if (i < str.length() && str[i] == str[i - 1])
        {
            count++;
        }
        else
        {
            compressed += str[i - 1] + to_string(count);
            count = 1;
        }
    }

    return (compressed.length() < str.length()) ? compressed : str;
}

int main()
{
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    cout << "Output: " << compress(str);
    return 0;
}
