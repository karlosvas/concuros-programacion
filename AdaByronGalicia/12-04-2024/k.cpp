#include <bits/stdc++.h>
#include <map>
using namespace std;

bool solve() {
  string s;
  cin >> s;

  if (!cin)
    return false;

  map<char, int> letters;
  for (char c : s)
    letters[c]++;

  int N;
  cin >> N;
  vector<string> words;

  for (int n = 0; n < N; n++) {
    map<char, int> l = letters;
    string t;
    cin >> t;
    bool implement = true;
    for (char c : t) {
      if (l.find(c) == l.end()) {
        implement = false;
        break;
      }

      l[c]--;

      if (l[c] == 0)
        l.erase(c);
      else if (l[c] < 0) {
        implement = false;
        break;
      }
    }
    if (implement)
      words.push_back(t);
  }
  sort(words.begin(), words.end());
  if (words.size() == 0)
    cout << "No es posible\n";
  else
    cout << words[0] << '\n';

  return true;
}

int main() {
  while (solve())
    ;
  return 0;
}