#include<iostream>
using namespace std;

int main() {
  string s, st[] = {"dream", "dreamer", "erase", "eraser"};
  bool dp[100010];

  cin >> s;

  dp[0] = 1;

  for (int i = 0; i < s.size(); i++) {
    if (!dp[i]) continue;
    for (string t : st) {
      if (s.substr(i, s.size()) == s) {
        dp[i + s.size()] = 1;
      }
    }
  }

  cout << (dp[s.size()] ?  "YES" : "NO") << endl;
  return 0;
}