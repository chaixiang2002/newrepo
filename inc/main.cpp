#include "ptr.h"

#include <iostream>

int main() {
  ptr<int> a;
  a.p[0] = 2;
  a.resize(3);
  a.p[2] = 1;

  a.resize(100);
  a.p[10] = 10;
  for (int i{}; i < a.msize; ++i) {
    std::cout << a.p[i] << '\t';
  }
  return 0;
}