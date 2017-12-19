#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>

using namespace std;

#define ll long long

int main() {
  ll ans = 0LL;
  string line;
  while(getline(cin, line)) {
    stringstream ss;
    ss << line;
    bool first = true;
    ll currN, maxN, minN;
    while(ss >> currN) {
      if(first) {
        maxN = currN;
        minN = currN;
      }
      first = false;
      maxN = max(maxN, currN);
      minN = min(minN, currN);
    }
    ans += (maxN - minN);
  }
  cout << ans << endl;
  return 0;
}
