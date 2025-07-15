#include <iostream>
#include <string>

using namespace std;

int N;
int X[200009], Y[200009];
string S;

int main() {
  // 入力
  cin >> N;
  for (int i = 0; i < N; i++) cin >> X[i] >> Y[i];
  cin >> S;

  // 衝突チェック
  for (int i = 0; i < N; i++) {
    for (int j = i + 1; j < N; j++) {
      // 同じ Y 座標にいる場合
      if (Y[i] == Y[j]) {
        // 反対方向に歩いているか確認
        if ((S[i] == 'R' && S[j] == 'L' && X[i] < X[j]) ||
            (S[i] == 'L' && S[j] == 'R' && X[j] < X[i])) {
          cout << "Yes" << endl;
          return 0;
        }
      }
    }
  }

  cout << "No" << endl;
  return 0;
}
