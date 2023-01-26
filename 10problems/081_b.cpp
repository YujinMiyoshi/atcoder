#include <iostream>
using namespace std;

bool is_even (int num) {
  if (num%2 == 0) return true;
  else return false;
}

int main () {
  int n, count = 0;
  bool flag = false;
  cin >> n;
  int arr[n];

  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  while (true) {
    for (int i = 0; i < n; i++) {
      if (is_even(arr[i]) == false) flag = true;
    }
    if (flag) break;
    for (int i = 0; i < n; i++) arr[i] /= 2;
    count++;
  }

  cout << count << endl;
}