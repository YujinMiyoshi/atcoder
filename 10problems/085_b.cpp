#include <iostream>
using namespace std;

int main() {
  int n, q, cnt = 0;

  cin >> n;
  cin >> q;

  int arr[n];

  for (int i = 0; i < n; i++) {
    cin >> arr[i];

    for (int j = 0; j < i; j++) {
      if (arr[i] == arr[j]) cnt++;
    }
  }

  cout << n - cnt << endl;
}