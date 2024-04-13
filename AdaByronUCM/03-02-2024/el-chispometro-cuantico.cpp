#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;
bool solve() {
  int n;
  cin >> n;
  if (n == 0)
    return false;

  vector<bool> chispas(n + 1, false);

  while (chispas.size() > 0) {

    int m;
    cin >> m;

    chispas[m] = true;

    if (chispas.size() == 1)
      cout << "Respuesta: \n";
    else
      cout << '?' << endl;

    return true;
  }

  int main() {
    while (solve())
      ;
    return 0;
  }