#include <iostream>
#include <algorithm>

using namespace std;

// a の b 乗を m で割った余りを返す関数
long long Power(long long a, long long b, long long m) {
  long long p = a, Answer = 1;
  for (int i = 0; i < 30; i++) {
    int wari = (1 << i);
    if ((b / wari) % 2 == 1) {
      Answer = (Answer * p) % m; // 「a の 2i 乗」が掛けられるとき
    }
    p = (p * p) % m;
  }
  return Answer;
}

// a / b を m で割った余りを返す関数
// 関数 Power は 5.4 節を参照のこと
long long Division(long long a, long long b, long long m) {
  return (a * Power(b, m - 2, m)) % m;
}

int main() {
  // 入力
  const long long M = 1000000007;
  long long n, r;
  cin >> n >> r;

  // 手順1: 分子 a を求める
  long long a = 1;
  for (int i = 1; i <= n; i++) a = (a * i) % M;
  
  // 手順2: 分母 b を求める
  long long b = 1;
  for (int i = 1; i <= r; i++) b = (b * i) % M;
  for (int i = 1; i <= n - r; i++) b = (b * i) % M;

  // 手順3: 答えを求める
  cout << Division(a, b, M) << endl;
  return 0;
}
