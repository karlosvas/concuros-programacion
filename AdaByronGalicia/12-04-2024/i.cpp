#include <bits/stdc++.h>
using namespace std;

bool solve() {
  int N;
  cin >> N;

  if (N == 0)
    return false;

  vector<int> v(N);
  for (int n = 0; n < N; n++)
    cin >> v[n];

  stack<int> s;
  vector<int> ARE(N);

  for (int n = 0; n < N; n++) {
    while (!s.empty() && v[s.top()] <= v[n]) {
      s.pop();
    }

    ARE[n] = (s.empty() ? n + 1 : n - s.top());

    s.push(n);
  }

  for (int n = 0; n < N; n++) {
    cout << ARE[n];
    if (n == N - 1)
      cout << "\n";
    else
      cout << " ";
  }

  return true;
}

int main() {
  while (solve())
    ;
  return 0;
}