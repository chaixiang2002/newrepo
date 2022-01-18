#ifndef __t_a_r_HPP
#define __t_a_r_HPP
#include <iostream>
#define max 10000
// s
struct noded {
  int a[max];
  noded() { init(); }
  void print() {
    for (int i = 0; i < max; i++) {
      if (a[i] != -9999) {
        std::cout << a[i] << '\t';
      }
    }
    std::cout << std::endl;
  }
  void init() {
    for (int i = 0; i < max; i++) {
      a[i] = -9999;
    }
  }
  int lenth() {
    int i;
    int lenn = 0;
    for (i = 0; i < max; i++) {
      if (a[i] == -9999) {
        break;
      }
      lenn++;
      // std::cout << a[i] << '\t';
    }
    return lenn;
  }
};
#endif