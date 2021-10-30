#include <bits/stdc++.h>
using namespace std;
const int N = 100000;
int a[N];
int aaa = 0;
int resolve(int n) {
  int sum = 1;
  aaa++;
  cout << "----" << aaa << "--n:" << n << endl;
  if (n < N && a[n] != 0) {
    return a[n];
  }
  for (int i = 2; i <= sqrt(n); i++) {
    if (n % i == 0) {
      if (i * i == n) {
        sum += resolve(i);
        cout << n << "=" << i << "*" << i << endl;

      } else {
        sum += resolve(i) + resolve(n / i);
        cout << n << "=" << i << "*" << n / i << endl;
      }
    }
  }
  if (n < N) {
    a[n] = sum;
  }
  return sum;
}
int main() {
  int n;
  cin >> n;
  memset(a, 0, sizeof(a));
  cout << "===========================" << endl;
  cout << n << "=" << n << endl;
  cout << resolve(n) << endl;
  return 0;
}