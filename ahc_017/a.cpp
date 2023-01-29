#include<iostream>
using namespace std;

typedef struct 
{
    int u;
    int v;
    int w;
}line;

int main() {
  int n, m, d, k;

  cin >> n >> m >> d >> k;

  line lines[m];

  for (int i = 1; i <= m; i++) {
    cin >> lines[i].u >> lines[i].v >> lines[i].w;
  }

  
}