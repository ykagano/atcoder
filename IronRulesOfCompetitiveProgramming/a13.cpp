#include <iostream>

using namespace std;

int N, K;
int A[100009];

int main() {
  cin >> N >> K;
  
  for(int i = 1; i <= N; i++) cin >> A[i];

  int R[100009];
  for(int i = 1; i <= N - 1; i++) {
    // i = 1であればR = 1から、そうでなければRi = Ri-1からスタートする
    if (i == 1) {
      R[i] = 1;
    } else {
      R[i] = R[i - 1];
    }

    // 一つ次の差分A[Ri] - A[i]がKを超えないギリギリまで、R[i]を1増やす操作を繰り返す
    while (R[i] + 1 <= N && A[R[i] + 1] - A[i] <= K) {
        R[i]++;
    }
  }
  
  long long answer = 0;
  // R[i]からiを引くことで現在位置で差がK以下の数が分かる
  for(int i = 1; i <= N - 1; i++) answer += R[i] - i;

  cout << answer << endl;

  return 0;
}
