#include <iostream>
using namespace std;

int count(string s) {
  int cnt = 0;
  for (int i = 0; i < s.size(); i++) {
    if (s[i] == '1') ++cnt;
  }

  return cnt;
}

int main () {
  string s;
  int cnt = 0;

  cin >> s;

  cnt = count(s);

  cout << cnt << endl;
}