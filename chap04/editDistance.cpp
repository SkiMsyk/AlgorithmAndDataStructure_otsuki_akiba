#include <iostream>
#include <string>
#include <vector>
using namespace std;

template<class T> void chmin(T& a, T b) {
  if (a > b) {
    a = b;
  }
}

const int INF = 1 << 29;

int main() {
  // input
  string S, T;
  cin >> S >> T;

  // dp array
  vector<vector<int>> dp(S.size() + 1, vector<int>(T.size() + 1, INF));

  // dp initial
  dp[0][0] = 0;

  // dp
  for (int i=0; i <= S.size(); ++i) {
    for (int j=0; j <= T.size(); ++j) {
      // change operation
      if (i > 0 && j > 0) {
        if (S[i-1] == T[j-1]) {
          chmin(dp[i][j], dp[i-1][j-1]);
        } else {
          chmin(dp[i][j], dp[i-1][j-1] + 1);
        }
      }

      // delete operation
      if (i > 0) {
        chmin(dp[i][j], dp[i-1][j]+1);
      }

      // insert operation
      if (j > 0) {
        chmin(dp[i][j], dp[i][j-1]+1);
      }
    }
  }
  // output
  cout << dp[S.size()][T.size()] << endl;
}