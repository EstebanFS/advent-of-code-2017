#include <iostream>
#include <unordered_set>
#include <vector>

using namespace std;

void increaseVector(vector<int> &x) {
  int maxi = -1, index = -1, inc;
  for(int i = 0; i < x.size(); ++i) {
    if(maxi < x[i]) {
      maxi = x[i];
      index = i;
    }
  }
  inc = maxi / x.size();
  for(int i = 0; i < x.size(); ++i) {
    index = (index + 1) % x.size();
    x[index] += inc;
  }
  for(int i = 0; i < (maxi - (inc * x.size())); ++i) {
    
  }
}

int findCycle(vector<int> &x) {
  unordered_set<vector<int> > s;
  while(!s.count(x)) {

  }
}

int main() {
  vector<int> numbers;
  int currN;
  while(cin >> currN) numbers.push_back(currN);
  cout << findCycle(numbers) << endl;
  return 0;
}
