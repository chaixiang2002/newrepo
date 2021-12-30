#include "t_a_r.hpp"
#include "ttt.cpp"
#include <iostream>
#include <ostream>
int main() {
  noded *p;
  noded pp;
  p = &pp;
  pp.a[2] = 22;
  // p->a[2] = 22;
  p->print();
  pp.print();

  return 0;
}
