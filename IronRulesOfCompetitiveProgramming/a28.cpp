#include <iostream>
#include <algorithm>

using namespace std;

int N;
char T[100009];
int A[100009];
long long answer;

int main() {
  // 入力
  cin >> N;
  for (int i = 1; i <= N; i++) cin >> T[i] >> A[i];

  answer = 0;
  for (int i = 1; i <= N; i++) {
    if (T[i] == '+') answer += A[i];
    if (T[i] == '-') answer -= A[i];
    if (T[i] == '*') answer *= A[i];

    // 答えを出力
    answer = (answer % 10000 + 10000) % 10000;
    cout << answer << endl;
  }
  return 0;
}
