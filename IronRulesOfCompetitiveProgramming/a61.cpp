#include <iostream>
#include <vector>

using namespace std;

int N, M;
int A, B;

int main() {
  // 入力
  cin >> N >> M;

  vector<vector<int>> G(N+1);

  for (int i = 1; i <= M; i++) {
    cin >> A >> B;
    G[A].push_back(B);
    G[B].push_back(A);
  }

  for (int i = 1; i <= N; i++) {
    cout << i << ": {";
    for (int j = 0; j < G[i].size(); j++) {
      cout << G[i][j];
      if (j < G[i].size() - 1) cout << ", ";
    }
    cout << "}" << endl;
  }
  return 0;
}