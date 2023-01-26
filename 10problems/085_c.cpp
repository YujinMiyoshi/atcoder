#include<iostream>
using namespace std;

int main() {
  int n, y, a, b = 0, c = 0, x;

  cin >> n >> y;
  a = y / 10000;
  x = y - (a*10000);
  if (x >= 5000) b = 1;
  c = (x - b*5000)/1000;

  if ((a*10000 + b*5000 + c*1000) == y && (a + b + c) <= n) cout << a << ' ' << b << ' ' << c << endl;
  else cout << -1 << ' ' << -1 << ' ' << -1 << endl;
}