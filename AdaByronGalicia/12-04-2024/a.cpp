#include <bits/stdc++.h>
using namespace std;

// Cantidad de bollos que se pueden hacer
int getBollo(int &N, int a, int b, int c, int d) {
  int bollo = 0;
  while (a > 0 && b <= a && N > 0 && c <= N) {
    N -= c;
    a -= b;
    bollo += d;
  }
  return bollo;
}

bool solve() {
  // Gramos de masa(N)
  // Tipos de chorizos(M)
  // Masa de bollos sin relleno(Co)
  // Coste de bollos con relleno(Do)
  int N, M, Co, Do;
  cin >> N >> M >> Co >> Do;

  if (!cin)
    return false;

  int bollo = 0;
  for (int i = 0; i < M; i++) {
    // a: masa de chorizo disponible
    // b: masa de chorizo necesaria para hacer un bollo
    // c: masa de bollo necesario para hacer un bollo
    // d: Dinero que se obtiene por bollo
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    // Hay dos opciones o hacer bollos con chorizo o sin chorizo
    // Si se gana manos con bollos con chorizo que sin chorizo no se hacen
    if (d < Do)
      continue;
    // Cantidad de bollos que se pueden hacer con chorizo
    int whit_chorizo = getBollo(N, a, b, c, d);
    bollo += whit_chorizo;
  }

  // Cantidad de bollos que se pueden hacer con el sobrante
  bollo += (N / Co) * Do;

  cout << bollo << "\n";
  return true;
}

int main() {
  while (solve())
    ;
  return 0;
}