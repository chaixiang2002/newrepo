#include "huffman.hpp"
// Actual parameters:haffumantree,x   , m
// Formal parameters:hf[]        ,x[] , mf

using namespace std;

//==============================================================================================================
int main(void) {
  double x[] = {0.07, 0.19, 0.02, 0.06, 0.32, 0.03, 0.21, 0.10 };
  int m = 8; /*  sizeof(x) / sizeof(x[0]); */
  element *haffmantree = new element[2 * m - 1];
  haffmans(haffmantree, x, m);
  print(haffmantree, 2 * m - 1);
}
//==============================================================================================================
