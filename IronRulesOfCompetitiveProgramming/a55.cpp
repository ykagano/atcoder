#include <iostream>
#include <set>

using namespace std;

set<int> S;
int N;
int Q[100009];
int X[100009];

int main() {
  // 入力
  cin >> N;
  for (int i = 1; i <= N; i++) {
    cin >> Q[i] >> X[i];
  }

  for (int i = 1; i <= N; i++) {
    if (Q[i] == 1) S.insert(X[i]); // xを追加
    if (Q[i] == 2) S.erase(X[i]); // xを削除
    if (Q[i] == 3) {
      auto itr = S.lower_bound(X[i]);
      if (itr == S.end()) {
        cout << "-1" << endl;
      } else {
        cout << (*itr) << endl;
      }
    }
  }
  return 0;
}
