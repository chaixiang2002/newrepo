#include <iostream>
using namespace std;
int sum(int b[3][3]);
int main(void) {
  int a[3][3] = {{10, 12, 13},
                 {
                     14,
                     15,
                     16,
                 },
                 {17, 18, 19}};
  int s;
  s = sum(a);
  cout << s << endl;
}
int sum(int b[3][3]) {
  cout << b << endl;
  cout << *b << endl;
  cout << **b << endl;
  cout << b[1][1] << endl;

  int s = 0;
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      if (i == j) {
        s += b[i][j];
      }
    }
  }
  return s;
}