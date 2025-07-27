#include <iostream>
#include <queue>

using namespace std;

queue<string> S;
int N;
int Q[100009];
string X[100009];

int main() {
  // 入力
  cin >> N;
  for (int i = 1; i <= N; i++) {
    cin >> Q[i];
    if (Q[i] == 1) cin >> X[i];
  }

  for (int i = 1; i <= N; i++) {
    if (Q[i] == 1) S.push(X[i]); // 最後尾に要素を追加
    if (Q[i] == 2) cout << S.front() << endl; // 先頭の要素を取得
    if (Q[i] == 3) S.pop(); // 先頭要素を削除
  }
  return 0;
}
