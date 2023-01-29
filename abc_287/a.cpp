#include<iostream>
using namespace std;

int main() {
  int n, f = 0, a = 0;
  string s;

  cin >> n;

  for (int i = 0; i < n; i++) {
    cin >> s;
    if (s == "For") f++;
    else a++;
  }

  if (f > a) cout << "Yes" << endl;
  else cout << "No" << endl;

  return 0;
}