#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void rotate(vector<vector<char>> &mat) {
  int n = mat.size();

  for (int i = 0; i < n; i++) {
    for (int j = i; j < n; j++) {
      swap(mat[j][i], mat[i][j]);
    }
  }

  for (int i = 0; i < n; i++) {
    reverse(mat[i].begin(), mat[i].end());
  }
}

int main() {
  int C;
  cin >> C;
  while (C--) {
    int Y = 31, X = 31;
    vector<vector<char>> mat(Y, vector<char>(X, '.'));

    for (int y = 0; y < Y; y++) {
      for (int x = 0; x < X; x++) {
        cin >> mat[y][x];
      }
    }

    while (mat[Y - 2][X - 2] == '#') {
      rotate(mat);
    }

    for (int y = 0; y < Y; y++) {
      for (int x = 0; x < X; x++) {
        cout << mat[y][x];
      }
      cout << "\n";
    }
  }

  return 0;
}