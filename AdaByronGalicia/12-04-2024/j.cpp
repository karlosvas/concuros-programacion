#include <bits/stdc++.h>
using namespace std;

bool compare(const pair<int, int> &a, const pair<int, int> &b) {
  return a.second > b.second;
}

bool solve() {
  int N;
  cin >> N;
  if (N == 0)
    return false;

  map<int, int> don;
  for (int n = 0; n < N; n++) {
    int x;
    cin >> x;
    don[x]++;
  }

  vector<pair<int, int>> vec(don.begin(), don.end());
  sort(vec.begin(), vec.end(), compare);

  if (!vec.empty()) {
    cout << vec[0].first << "\n";
  }

  return true;
}

int main() {
  while (solve())
    ;
  return 0;
}