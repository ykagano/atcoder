#include <iostream>
#include <stack>

using namespace std;

stack<string> S;
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
    if (Q[i] == 1) S.push(X[i]); // 一番上に要素を追加
    if (Q[i] == 2) cout << S.top() << endl; // 一番上の要素を取り出す
    if (Q[i] == 3) S.pop(); // 一番上の要素を削除
  }
  return 0;
}
