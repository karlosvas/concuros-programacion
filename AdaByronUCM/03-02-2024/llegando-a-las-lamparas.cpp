#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int64_t INF = 1000000000;

bool solve() {
  int64_t A;
  int N;
  cin >> A >> N;

  if (A == 0 && N == 0)
    return false;

  vector<int64_t> heigth;

  for (int n = 0; n < N; n++) {
    int64_t h;
    cin >> h;
    heigth.push_back(h);
  }

  sort(heigth.begin(), heigth.end());

  int64_t res = INF;
  int64_t l = 0, r = N - 1;
  while (l < r) {
    if (heigth[l] + heigth[r] >= A) {
      res = min(res, heigth[l] + heigth[r]);
      --r;
    } else
      ++l;
  }

  if (res == INF)
    cout << "0\n";
  else
    cout << res << '\n';

  return true;
}

int main() {
  while (solve()) {
  }
  return 0;
}