#include <iostream>
#include <vector>
using namespace std;

template<class T> void chmax(T&a, T b) {
  if (a < b) {
    a = b;
  }
}

int main() {
  // input
  int N;
  long long W;
  cin >> N >> W;
  vector<long long> weight(N), value(N);
  for (int i=0; i<N; ++i) cin >> weight[i] >> value[i];

  // dp array
  vector<vector<long long>> dp(N+1, vector<long long>(W+1, 0));

  // dp
  for (int i=0; i<N; ++i) {
    for (int w=0; w<=W; ++w) {
      // chosing i-obj
      if (w - weight[i] >= 0) {
        chmax(dp[i+1][w], dp[i][w-weight[i]] + value[i]);
      }

      // not chosing i-obj
      chmax(dp[i+1][w], dp[i][w]);
    }
  }

  // result
  cout << dp[N][W] << endl;
}