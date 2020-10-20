#include <iostream>
using namespace std;

int GCD(int m, int n) {
  // base case
  if (n==0) return m;
  // recursion
  return GCD(n, m % n);
}

int main() {
  cout << GCD(51, 15) << endl;
}