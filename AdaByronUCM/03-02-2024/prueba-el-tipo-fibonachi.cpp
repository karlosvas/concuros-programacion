#include <bitset>
#include <cstdint>
#include <iostream>
#include <string>
using namespace std;

void fibonacciBinario(int f, int64_t &one, int64_t &zero) {
  if (f > 1) {
    int a = 0, b = 1;
    for (int i = 2; i < f; i++) {
      int c = a + b;
      bitset<64> bits(c);
      one += bits.count();
      string binary_string = bits.to_string();
      // Iterador del primer 1 hasta el final.
      auto it = lower_bound(binary_string.begin(), binary_string.end(), '1');
      int dist = distance(it, binary_string.end());
      zero += dist - one;
      a = b;
      b = c;
    }
  }
}

bool solve() {
  int64_t n;
  cin >> n;

  if (!cin)
    return false;

  for (int i = 0; i < n; i++) {
    int f;
    cin >> f;

    if (f == 0) {
      cout << "-1\n";
      continue;
    } else if (f == 1) {
      cout << "1\n";
      continue;
    }

    int64_t one = 0, zero = 0;
    fibonacciBinario(f, one, zero);
    cout << one - zero << "\n";
  }

  return true;
}

int main() {
  while (solve()) {
  }
  return 0;
}