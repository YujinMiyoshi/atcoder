#include <iostream>
using namespace std;

bool is_even (int num) {
  if (num%2 == 0) return true;
  else return false;
}

int main () {
  int a, b, num;
  cin >> a >> b;
  num = a*b;
  if (is_even(num)) cout << "Even" << endl;
  else cout << "Odd" << endl;
}