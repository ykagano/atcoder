#include <iostream>
#include <algorithm>

using namespace std;

int N;
int A[69], B[69];
int Answer;

int main() {
  // 入力
  cin >> N;
  for (int i = 0; i < N; i++) cin >> A[i];
  for (int i = 0; i < N; i++) cin >> B[i];

  sort(A, A + N); // 昇順ソート
  sort(B, B + N, greater<int>()); // 降順ソート

  for (int i = 0; i < N; i++) Answer += A[i] * B[i];

  // 答えの出力
  cout << Answer << endl;
  return 0;
}