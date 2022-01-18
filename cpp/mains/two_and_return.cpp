#include "t_a_r.hpp"
#include "ttt.cpp"
#include <iostream>
#include <ostream>
int main() {
  noded L;
  /* int aa[9] = {0, 8, 5, 4, 3, 8, 1, 56, 9};
  for (int i = 0; i < 9; i++) {
    L.a[i] = aa[i];
  } */
  //============================
  int nn = 10000;

  for (int i = 0; i < nn; i++) {
    L.a[i] = rand() % nn;
  }
  //============================
  L.print();
  // std::cout << "1" << std::endl;
  noded G = two_and_return(L);
  // std::cout << "2" << std::endl;

  G.print();

  return 0;
}
//