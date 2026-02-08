#include <iostream>
#include <string>
using namespace std;

bool isRotation(string& s1, string& s2) {
    if (s1.length() != s2.length() || s1.empty()) 
    return false;

    string combined = s1 + s1;

    return combined.find(s2) != string::npos;
}

int main() {
    string str1,str2;
    cin >> str1 >> str2;

    if (isRotation(str1, str2)) 
    {
        cout << "true" << endl;
    } 
    else 
    {
        cout << "false" << endl;
    }
}
