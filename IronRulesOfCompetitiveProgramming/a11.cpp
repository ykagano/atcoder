#include <iostream>

using namespace std;

int N, X, A[100009];
int xstart, xend, center, answer;

int main() {
    cin >> N >> X;
    for (int i = 1; i <= N; i++) cin >> A[i];

    xstart = 0;
    xend = N;
    center = N / 2;
    
    while(1) {
      if (A[center] == X) {
        answer = center;
        break;
      }
      
      if (A[center] < X) {
        xstart = center;
        center = xend - ((center - xstart) / 2);
      } else {
        xend = center;
        center = center - ((center - xstart) / 2);
      }
    }
    cout << answer;

    return 0;

}
