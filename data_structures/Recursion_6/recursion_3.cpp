#include <iostream>
#include <math.h>
using namespace std;

int sum = 0;
int rec(int n);
int main(void) {
  int num;
  cout << "get me a int number" << endl;
  cin >> num;
  cout << num << "  has " << rec(num) << "factorizations" << endl;
}
int rec(int n) {
  sum++;
  for (int i = 2; i < sqrt(n); i++) {
    if (n % i == 0) {
      if (n / i == i) {
        rec(i)
      }
    }
  }
}