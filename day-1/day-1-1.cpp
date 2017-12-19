#include <iostream>
#include <string>

using namespace std;

#define ll long long

int main() {
  string sequence;
  cin >> sequence;
  int sSize = sequence.size();
  ll ans = 0LL;
  if(sequence[0] == sequence[sSize - 1]) ans += (sequence[0] - '0');
  for(int i = 1; i < sSize; ++i) {
    if(sequence[i] == sequence[i - 1]) ans += (sequence[i] - '0');
  }
  cout << ans << endl;
  return 0;
}
