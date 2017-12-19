#include <iostream>
#include <string>

using namespace std;

#define ll long long

int main() {
  string sequence;
  cin >> sequence;
  int sSize = sequence.size();
  sequence += sequence;
  ll ans = 0LL;
  for(int i = 0; i < sSize; ++i) {
    if(sequence[i] == sequence[i + (sSize / 2)]) ans += (sequence[i] - '0');
  }
  cout << ans << endl;
  return 0;
}
