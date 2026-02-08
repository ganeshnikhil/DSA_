#include <iostream>
#include <string>

using namespace std;

int main() {
    
    string s;
    char target;
    
    getline(cin, s);
    cin >> target;

    int count = 0;
    for (int i = 0; i < s.length(); ++i) {
        if (s[i] == target) {
            count++;
        }
    }

    cout << count << endl;
}
