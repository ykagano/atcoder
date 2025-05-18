#include <iostream>

using namespace std;

int N, K, A[100009];
int minsec, answer;
long long X;

int main() {
    cin >> N >> K;
    
    minsec = 0;
    for(int i = 1; i <= N; i++) {
      cin >> A[i];
      // 一番小さい秒数を見つける
      if (minsec == 0) {
        minsec = A[i];
      } else if (minsec > A[i]) {
        minsec = A[i];
      }
    }
    
    // 1台の最小秒数*チラシ数を検索範囲Xにする
    X = minsec * K;
    
    int xstart = 0;
    long long xend = X;
    long long center;
    long long sumflyer;
    int posflyer;
    
    while(xstart <= xend) {
      center = (xstart + xend) / 2;
      
      sumflyer = 0;
      posflyer = 0;
      
      for(int i = 1; i <= N; i++) {
        // 現在位置(経過秒数)/秒数=出力枚数
        sumflyer += center / A[i];
        
        // 余りがなければこの秒で出力した数
        if(center % A[i] == 0) posflyer += 1;
      }
      
      // 現在位置の出力総数がK枚目より多い、かつ多い数が秒間出力数より少ない
      if(sumflyer >= K && sumflyer - K < posflyer) {
        answer = center;
        break;
      }
      
      // 2分探索
      if (sumflyer < K) {
        xstart = center + 1;
      } else {
        xend = center - 1;
      }
    }
    cout << answer;

    return 0;
}
