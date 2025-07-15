#include <iostream>

using namespace std;

int N;
int A[100009], B[100009];
int count1, count2;

int main() {
  count1 = 0;
  count2 = 0;

  // 入力
  cin >> N;
  for (int i = 1; i <= N; i++) cin >> A[i];
  for (int i = 1; i <= N; i++) cin >> B[i];

  for (int i = 1; i <= N; i++) {
    if (A[i] == B[i]) {
      count1++;
    }
  }
  for (int i = 1; i <= N; i++) {
    for (int j = 1; j <= N; j++) {
      if (A[i] == B[j] && i != j) {
        count2++;
      }
    }
  }

  cout << count1 << endl;
  cout << count2 << endl;
  return 0;
}
