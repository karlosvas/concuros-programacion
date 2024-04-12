#include <bits/stdc++.h>
#include <cmath>
using namespace std;

bool solve() {
  string s;
  cin >> s;

  if (s == "0")
    return false;

  int sum = 0;
  for (char c : s)
    sum += pow(c - '0', s.size());

  if (stoi(s) == sum)
    cout << "SEGURO\n";
  else
    cout << "INSEGURO\n";

  return true;
}

int main() {
  while (solve())
    ;
  return 0;
}