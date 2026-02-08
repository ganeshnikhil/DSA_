#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string text;
    cout<<"Enter a string: "; 
    getline(cin, text);

    reverse(text.begin(), text.end());

    cout << "Reversed string: " << text << endl;

    return 0;
}
