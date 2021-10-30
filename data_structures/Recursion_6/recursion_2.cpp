#include <iostream>
using namespace std;
int a[10] = {1, 3, 4, 6, 9, 12, 14, 15, 16, 71};

int recursion(int m, int n, int fin);
int unrecursion(int m, int n, int fin);
int main(void) {
  int find, index;
  cout << "datebase:" << endl;
  for (int i = 0; i < 10; i++) {
    cout << a[i] << '\t';
  }
  cout << endl;
  cout << "plaese entr a number what you want to find" << endl;
  cin >> find;
  cout << "The index of " << find << " is " << recursion(0, 10, find) << endl;
  cout << "The index of " << find << " is " << unrecursion(0, 10, find) << endl;
}
int recursion(int m, int n, int fin) {
  if (a[m] == fin)
    return m;
  else if (a[n] == fin)
    return n;

  else {
    if (a[(m + n) / 2] == fin)
      return (m + n) / 2;
    else if (a[(m + n) / 2] > fin) {
      return recursion(m, (m + n) / 2, fin);
    } else if (a[(m + n) / 2 < fin]) {
      return recursion((m + n) / 2, n, fin);
    }
  }

  return 1111111111;
}
int unrecursion(int m, int n, int fin) {
  if (a[m] == fin)
    return m;
  else if (a[n] == fin)
    return n;
  while (!(a[(m + n) / 2] == fin)) {
    if (a[(m + n) / 2] > fin)
      n = (m + n) / 2;
    else
      m = (m + n) / 2;
  }
  return (m + n) / 2;
}
