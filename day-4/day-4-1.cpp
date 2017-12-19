#include <iostream>
#include <string>
#include <unordered_set>
#include <sstream>

using namespace std;

int main() {
  string line, word;
  int ans = 0;
  while(getline(cin, line)) {
    unordered_set<string> s;
    stringstream ss;
    bool valid = true;
    ss << line;
    while(ss >> word) {
      if(s.count(word)) {
        valid = false;
        break;
      }
      s.insert(word);
    }
    if(valid) ans++;
  }
  cout << ans << endl;
  return 0;
}
