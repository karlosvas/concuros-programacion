#include <iostream>
#include <map>
#include <string>
#include <vector>
using namespace std;

void get_child(string root, int child, vector<string> &castellana) {
  vector<string> actual;
  for (int i = 0; i < child; i++) {
    string r;
    int c;
    cin >> r >> c;
    actual.push_back(r);
    get_child(r, c, actual);
  }
}

bool solve() {
  string root;
  int child;

  cin >> root >> child;
  vector<string> castellana;

  get_child(root, child, castellana);

  return true;
}

int main() {
  while (solve()) {
  }
  return 0;
}