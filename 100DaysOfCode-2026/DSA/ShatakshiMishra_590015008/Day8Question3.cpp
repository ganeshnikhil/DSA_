#include <iostream>
#include <string>

using namespace std;

int main() {
    
    string s;
    getline(cin, s);
    
    string reversed = "";
    for (int i = s.length() - 1; i >= 0; --i) {
        reversed += s[i];
    }
    
    cout << reversed << endl;
}
