#include <iostream>
using namespace std;

int n;

int move(int defa_t,int defa_x,int defa_y,int t,int x,int y) {
  if (t > defa_t || x > n || y > n || x < 0 || y < 0) return 0;
  t += 1;
  if (x == defa_x && y == defa_y) return 1;
  else {
    int ans = 0;
    return move(defa_t, defa_x, defa_y, t, x + 1, y) + move(defa_t, defa_x, defa_y, t, x - 1, y) + move(defa_t, defa_x, defa_y, t, x, y + 1) + move(defa_t, defa_x, defa_y, t, x, y - 1);
  }
}

int main() {
  int t1, x1, y1, t2, x2, y2, result_1, result_2;
  cin >> n;
  cin >> t1 >> x1 >> y1;
  cin >> t2 >> x2 >> y2;
  result_1 = move(t1, x1, y1, 0, 0, 0);
  if (result_1 > 1) {
    result_2 = move(t2, x2, y2, t1, x1, y1);

    if (result_2 > 1) cout << "Yes" << endl;
    else cout << "No" << endl;
  }
  else cout << "No" << endl;
}