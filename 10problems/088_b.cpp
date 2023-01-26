#include <iostream>
using namespace std;

int main() {
  int n, alice = 0, bob = 0, max = 0;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
    if (arr[i] > max) max = arr[i];
  }
  int arr_2[max + 1] = {0};
  int arr_3[n + 1] = {false};
  for (int i = 0; i < n; i++) {
    arr_2[arr[i]] += 1;
  }
  for (int i = 1; i < max + 1; i++) {
    arr_2[i] += arr_2[i - 1];
  }
  for (int i = 0; i < n; i++) {
    arr_3[arr_2[arr[i]]] = arr[i];
    arr_2[arr[i]] -= 1;
  }
  for (int i = 1; i < n + 1; i++) {
    if (i%2  == 0) {
      bob += arr_3[i];
    }
    else {
      alice += arr_3[i];
    }
  }
  cout << alice - bob << endl;
}