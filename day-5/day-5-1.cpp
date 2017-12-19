#include <iostream>
#include <vector>

using namespace std;

int main() {
  vector<int> instructions;
  int currIns, ans = 0;
  while(cin >> currIns) instructions.push_back(currIns);
  currIns = 0;
  while(currIns >= 0 && currIns < instructions.size()) {
    int movement = instructions[currIns];
    instructions[currIns]++;
    currIns += movement;
    ans++;
  }
  cout << ans << endl;
  return 0;
}
