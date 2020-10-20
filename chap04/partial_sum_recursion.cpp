#include <iostream>
#include <vector>
using namespace std;

bool func(int i, int w, const vector<int> &a) {
  // base case
  if (i == 0) {
    if (w == 0) return true;
    else return false;
  }

  // 1. chosing a[i-1]
  if (func(i-1, w, a)) return true;

  // 2. not chosing a[i-1]
  if (func(i-1, w-a[i-1], a)) return true;

  // if 1 and 2 are false 
  return false;
}

int main() {
  // input
  int N, W;
  cin >> N >> W;
  vector<int> a(N);
  for (int i=0; i<N; ++i) cin >> a[i];

  // recursive solution
  if (func(N, W, a)) cout << "Yes" << endl;
  else cout << "No" << endl;
}