#include "tele.cpp"
#include "tele.hpp"
#include <cstdio>
// Actual parameters:haffumantree,x   , m
// Formal parameters:hf[]        ,x[] , mf

using namespace std;

int main(void) {
  printf("\n");
  printf("1.Construct the Haffman_Tree:\n");
  printf("===================================================\n");
  double x[] = {0.07, 0.19, 0.02, 0.06, 0.32, 0.03, 0.21, 0.10};
  char chA[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h'};
  int m = sizeof(x) / sizeof(x[0]);
  element *haffmantree = new element[2 * m - 1];
  haffmans(haffmantree, chA, x, m);
  print(haffmantree, 2 * m - 1);
  printf("2.Output code:\n");
  printf("===================================================\n");
  tele(haffmantree, m);
}
