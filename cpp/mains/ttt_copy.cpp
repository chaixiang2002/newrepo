#include "t_a_r.hpp"
#include <ostream>
noded *copy(noded G, int begin, int end) {

  // std::cout << "2.2" << std::endl;

  noded neww;
  int j = 0;
  for (int i = begin; i <= end; i++) {
    // std::cout << "2.3" << std::endl;

    neww.a[j] = G.a[i];
    // std::cout << "2.4" << std::endl;

    j++;
  }
  noded *p = &neww;
  return p;
}
noded sort(noded G1, noded G2) {
  // std::cout << "dsdsfsdfsd" << std::endl;
  int i = 0, j = 0, k = 0;
  noded neww;
  int lenG1G2 = G1.lenth() + G2.lenth();
  // std::cout << "------" << std::endl;
  for (int k = 0; k < lenG1G2; k++) {
    if (i == G1.lenth() && j < G2.lenth()) {
      neww.a[k] = G2.a[j];
      j++;
    } else if (i < G1.lenth() && j == G2.lenth()) {
      neww.a[k] = G1.a[i];
      i++;
    } else if (j < G2.lenth() && i < G1.lenth() && G1.a[i] < G2.a[j]) {
      neww.a[k] = G1.a[i];
      i++;
    } else {
      neww.a[k] = G2.a[j];
      j++;
    }
  }
  // std::cout << "rrrr55555555" << std::endl;

  /* std::cout << "00000" << std::endl;
  std::cout << lenG1G2 << std::endl;
  G1.print();
  G2.print();
  neww.print();
  std::cout << "77777" << std::endl; */

  return neww;
}
noded two_and_return(noded G) {

  int len = G.lenth();
  // td::cout << "len:" << G.lenth() << std::endl;
  if (len == 1) {
    /* noded *p;
    p = &G; */
    // std::cout << "111:";
    //  p->print();
    return G;
  }
  noded neww;
  neww = *copy(G, 0, (len / 2) - 1);
  // neww.print(); //

  //===================
  noded neww2;
  neww2 = *copy(G, len / 2, len - 1);

  // neww2.print();
  //===================

  return sort(two_and_return(neww), two_and_return(neww2));
} //