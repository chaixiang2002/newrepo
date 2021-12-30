#include <stdio.h>
int *ww(int a[]) {
  int b[3] = {4, 5, 6};
  return b;
}
int main() {
  int a[3] = {1, 3, 2};
  a = ww(a);
  return 0;
}