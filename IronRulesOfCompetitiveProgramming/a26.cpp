#include <iostream>
#include <algorithm>

using namespace std;

int Q;
int X[300009];
string answer;

int main() {
  // 入力
  cin >> Q;
  for (int i = 1; i <= Q; i++) cin >> X[i];

  for (int i = 1; i <= Q; i++) {
    answer = "Yes";
    if (X[i] == 1) answer = "No";
    for (int j = 2; j * j <= X[i]; j++) {
      if (X[i] % j == 0) {
        answer = "No";
        break;
      }
    }
    // 答えを出力
    cout << answer << endl;
  }

  return 0;
}
