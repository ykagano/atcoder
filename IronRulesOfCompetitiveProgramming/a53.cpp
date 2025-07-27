#include <iostream>
#include <queue>

using namespace std;

priority_queue<int, vector<int>, greater<int>> P; // 最小ヒープにする
int N;
int Q[100009];
int X[100009];

int main() {
  // 入力
  cin >> N;
  for (int i = 1; i <= N; i++) {
    cin >> Q[i];
    if (Q[i] == 1) cin >> X[i];
  }

  for (int i = 1; i <= N; i++) {
    if (Q[i] == 1) P.push(X[i]); // xを追加
    if (Q[i] == 2) cout << P.top() << endl; // 最小要素を取得
    if (Q[i] == 3) P.pop(); // 最小要素を削除
  }
  return 0;
}
