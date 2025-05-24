#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int N, A[100009], B[100009], dp[100009];
vector<int> answer;

int main() {
  cin >> N;
  for(int i = 2; i <= N; i++) cin >> A[i];
  for(int i = 3; i <= N; i++) cin >> B[i];

  dp[1] = 0;
  dp[2] = A[2];
  // 以下小さい方
  // 部屋[i - 1]まで移動した後、1本の通路を通って部屋A[i]に行く
  // 部屋[i - 2]まで移動した後、1本の通路を通って部屋B[i - 1]（3からセットしているのでi）に行く
  for(int i = 3; i <= N; i++) dp[i] = min(dp[i - 1] + A[i], dp[i - 2] + B[i]);

  // 答えの復元
  // 変数 place は現在位置（ゴールから進んでいく）
  // 例えば入力例の場合、place は 5 -> 4 -> 2 -> 1 と変化していく
  int place = N;
  while(true) {
    answer.push_back(place);
    if(place == 1) break;

    // どこから部屋 place に向かうのが最適化を求める
    if (dp[place - 1] + A[place] == dp[place]) place = place - 1;
    else place = place - 2;
  }

  // answer は「ゴールからの岐路」になっているので、逆順にする
  // たとえば入力例の場合、answer = {5, 4, 2, 1} を {1, 2, 5, 4} にする
  reverse(answer.begin(), answer.end());

  cout << answer.size() << endl;
  for(int i = 0; i < answer.size(); i++) {
    if(i >= 1) cout << " ";
    cout << answer[i];
  }
  cout << endl;
  return 0;
}
