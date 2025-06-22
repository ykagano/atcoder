#include <iostream>

using namespace std;

int main() {
  // 入力
  long long n;
  cin >> n;

  long long a1 = (n / 3);
  long long a2 = (n / 5);
  long long a3 = (n / 15);

  cout << a1 + a2 - a3 << endl;
  return 0;
}
