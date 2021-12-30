#include "t_a_r.hpp"
noded *copy(noded G, int begin, int end) {

  std::cout << "2.2" << std::endl;

  noded neww;
  int j = 0;
  for (int i = begin; i <= end; i++) {
    std::cout << "2.3" << std::endl;

    neww.a[j] = G.a[i];
    std::cout << "2.4" << std::endl;

    j++;
  }
  noded *p = &neww;
  return p;
}
noded *sort(noded G1, noded G2) {
  int i = 0, j = 0, k = 0;
  noded *neww;
  int lenG1G2 = G1.lenth() + G2.lenth();
  do {
    if (G1.a[i] < G2.a[j]) {
      neww->a[k] = G1.a[i];
      i++;
    } else {
      neww->a[k] = G2.a[j];
      j++;
    }
    k++;
  } while (k != lenG1G2);
  return neww;
}
noded *two_and_return(noded G) {

  int len = G.lenth();
  if (len == 1) {
    noded *p;
    return p;
  }
  noded neww;
  std::cout << "1.1" << std::endl;
  neww = *copy(G, 0, (len / 2) - 1);
  std::cout << "1.2" << std::endl;
  if (len != 1) {
  }
  std::cout << "1.3" << std::endl;

  //===================
  noded neww2;
  neww2 = *copy(G, len / 2, len - 1);
  if (neww2.lenth() != 1) {
  }
  //===================
  std::cout << "1.4" << std::endl;

  return sort(*two_and_return(neww), *two_and_return(neww2));
}