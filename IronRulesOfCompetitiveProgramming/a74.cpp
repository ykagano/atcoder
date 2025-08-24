#include <iostream>

using namespace std;

int N, P[109][109];
int X[109], InversionsX = 0;
int Y[109], InversionsY = 0;

int main() {
  // 入力
  cin >> N;
  for (int i = 1; i <= N; i++) {
    for (int j = 1; j <= N; j++) {
      cin >> P[i][j];
      if (P[i][j] != 0) { X[i] = P[i][j]; Y[j] = P[i][j]; }
    }
  }

  // X の転倒数・Y の転倒数を求める
  for (int i = 1; i <= N; i++) {
    for (int j = i + 1; j <= N; j++) {
      if (X[i] > X[j]) InversionsX += 1;
      if (Y[i] > Y[j]) InversionsY += 1;
    }
  }

  // 出力
  cout << InversionsX + InversionsY << endl;
  return 0;
}