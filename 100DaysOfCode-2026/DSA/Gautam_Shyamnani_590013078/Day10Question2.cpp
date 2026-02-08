#include <iostream>
using namespace std;

int main() {
    string str, noSpaces = "";
    cout << "Enter a string: ";
    getline(cin, str);

    for (char c : str)
        if (c != ' ')
            noSpaces += c;

    cout << "Without spaces: " << noSpaces << endl;
    return 0;
}
