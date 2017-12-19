#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>
#include <vector>

using namespace std;

#define ll long long

ll findDiv(vector<ll> &x) {
  int ans = 0;
  for(int i = 0; i < x.size(); ++i) {
    for(int j = i + 1; j < x.size(); ++j) {
      if((x[i] % x[j]) == 0) ans = x[i] / x[j];
    }
  }
  return ans;
}

int main() {
  ll ans = 0LL;
  string line;
  while(getline(cin, line)) {
    stringstream ss;
    ss << line;
    ll currN;
    vector<ll> numbers;
    while(ss >> currN) {
      numbers.push_back(currN);
    }
    sort(numbers.rbegin(), numbers.rend());
    ans += findDiv(numbers);
  }
  cout << ans << endl;
  return 0;
}
