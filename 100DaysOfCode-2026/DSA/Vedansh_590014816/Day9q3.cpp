#include <iostream>
#include <unordered_map>

using namespace std;


char firstNonRepeatingChar(string &s){
  unordered_map<char, int> freq;
  for(char c:s){
      freq[c]++;
  }
  for(char c: s){
     if(freq[c]==1) return c;
  }
  return -1;

}


int main() {
    string s;
    cout << "Enter a string: ";
    getline(cin, s);
char result = firstNonRepeatingChar(s);
  if(result==-1){
        cout << "No non-repeating character found." << endl;
    
}
 else
        cout << "First non-repeating character: " << result << endl;
   

    return 0;
}
