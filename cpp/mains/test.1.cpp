#include "t_a_r.hpp"
#include "ttt.cpp"
#include <iostream>
#include <ostream>
int main() {
  noded L;
  int aa[9] = {0, 8, 5, 4, 3, 8, 1, 56, 9};
  for (int i = 0; i < 9; i++) {
    L.a[i] = i;
  }
  L.print();
  noded ne = *copy(L, 0, L.lenth() / 2);
  ne.print();

  return 0;
}
