#include <cstdio>
#include <iostream>
using namespace std;

int ADD(int m);
int main(void) {
  int n, sum = 0;
  cout << "please give me a number" << endl;
  cin >> n;
  sum = ADD(n);
  cout << "1+....." << n << "=" << sum << endl;
}
int ADD(int m) {
  if (m == 1) {
    return 1;
  } else if (m < 1) {
    cout << "The number is invalid!" << endl;
    return 0;
  } else {
    return m + ADD(m - 1);
  }
}