#include <iostream>
#include <map>

using namespace std;

int N;
int Q[100009];
map<string, int> X;
string student;
int score;

int main() {
  // 入力
  cin >> N;
  for (int i = 1; i <= N; i++) {
    cin >> Q[i];
    if (Q[i] == 1) {
      cin >> student >> score;
      X[student] = score;
    }
    if (Q[i] == 2) {
      cin >> student;
      cout << X[student] << endl;
    }
  }
  return 0;
}
