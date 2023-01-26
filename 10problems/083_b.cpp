#include <iostream>
using namespace std;
#include <vector>
#include <string>
#include <sstream>

int main() {
  int n, a, b, sum, num, w_sum;
  std::string str;
  vector<char> v;
  string s;

  cin >> n >> a >> b;
  
  for (int i = 1; i < 21; i++) {
    str = std::to_string(i);
    for (int i = 0; i < (int)str.size(); i++) {
      num = str[i] - '0';
      sum += num;
    }
    if (sum >= a && sum <= b) {
      w_sum += i;
    }
    sum = 0;
  }
  cout << w_sum << endl;
}