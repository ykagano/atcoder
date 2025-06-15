#include <iostream>
#include <algorithm>

using namespace std;

int a;
long long b;
long long answer;

int main() {
  // 入力
  cin >> a >> b;

  answer = 1;
  long long base = a;
  long long mod = 1000000007;

  while (b > 0) {
      if (b % 2 == 1) { // bが奇数なら結果にbaseを掛ける
          answer = (answer * base) % mod;
      }
      base = (base * base) % mod; // baseを二乗
      b /= 2; // bを半分にする
  }

  cout << answer << endl;
  return 0;
}
