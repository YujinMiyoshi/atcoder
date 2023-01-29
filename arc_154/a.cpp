#include <iostream>
#include <math.h>
using namespace std;

int main() {
  int n, a, b, x;
  int pow(int x, int y);
  
  cin >> n;
  cin >> a;
  cin >> b;

  int arr_a[n];

  for (int i = 0; i < n; i++) {
    arr_a[i] = a/pow(10, i);
  }  
  
}