#include "t_a_r.hpp"
#include <ostream>
noded *copy(noded G, int begin, int end) {
  noded neww;
  int j = 0;
  for (int i = begin; i <= end; i++) {
    neww.a[j] = G.a[i];
    j++;
  }
  noded *p = &neww;
  return p;
}
noded sort(noded G1, noded G2) {
  int i = 0, j = 0, k = 0;
  noded neww;
  int lenG1G2 = G1.lenth() + G2.lenth();
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
  return neww;
}
noded two_and_return(noded G) {
  int len = G.lenth();
  if (len == 1) {
    return G;
  }
  noded neww;
  neww = *copy(G, 0, (len / 2) - 1);

  noded neww2;
  neww2 = *copy(G, len / 2, len - 1);

  return sort(two_and_return(neww), two_and_return(neww2));
}