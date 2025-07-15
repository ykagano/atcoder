#include <iostream>

using namespace std;

int V, A, B, C;
char Answer;

int main() {
  // 入力
  cin >> V >> A >> B >> C;

  while (true) {
    if (V < A) {
      Answer = 'F';
      break;
    }
    V -= A;
    if (V < B) {
      Answer = 'M';
      break;
    }
    V -= B;
    if (V < C) {
      Answer = 'T';
      break;
    }
    V -= C;
  }

  cout << Answer << endl;
  return 0;
}
