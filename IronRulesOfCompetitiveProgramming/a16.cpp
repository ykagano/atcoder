#include <iostream>

using namespace std;

int N;
int A[100009], B[100009];

int main() {
  cin >> N;
  
  for(int i = 2; i <= N; i++) cin >> A[i];
  for(int i = 3; i <= N; i++) cin >> B[i];

  int dp[100009];
  for(int i = 1; i <= N; i++) {
    if (i == 1) {
      dp[1] = 0;
    } else if (i == 2) {
      dp[2] = A[i];
    } else {
      // 以下小さい方
      // 部屋[i - 1]まで移動した後、1本の通路を通って部屋A[i]に行く
      // 部屋[i - 2]まで移動した後、1本の通路を通って部屋B[i - 1]（3からセットしているのでi）に行く
      dp[i] = min(dp[i - 1] + A[i], dp[i - 2] + B[i]);
    }
  }
  cout << dp[N] << endl;

  return 0;
}
