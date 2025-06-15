#include <iostream>
#include <algorithm>

using namespace std;

int A, B;
int check, answer;

int main() {
  // 入力
  cin >> A;
  cin >> B;

  if (A < B) {
    check = A;
  } else {
    check = B;
  }

  for (int i = check; i >= 1; i--) {
    if (A % i == 0 && B % i == 0) {
      answer = i;
      break;
    }
  }

  // 答えを出力
  cout << answer << endl;
  return 0;
}
