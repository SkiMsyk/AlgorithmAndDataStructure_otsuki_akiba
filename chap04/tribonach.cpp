#include <iostream>
#include <vector>
using namespace std;

// global variable
vector<long long> memo;

long long tribo(int i) {
  if (i == 0) return 0;
  else if(i == 1) return 0;
  else if(i == 2) return 1;

  if (memo[i-1] == -1) memo[i-1] = tribo(i-1);
  if (memo[i-2] == -1) memo[i-2] = tribo(i-2);
  if (memo[i-3] == -1) memo[i-3] = tribo(i-3);
  return memo[i] = memo[i-1] + memo[i-2] + memo[i-3];
}

int main() {
  int N; // input
  cin >> N;
  memo.assign(N+1, -1); // initialize  
  cout << tribo(N) << endl;
}