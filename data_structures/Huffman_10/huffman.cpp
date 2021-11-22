#include "huffman.hpp"
// Actual parameters:haffumantree,x   , m
// Formal parameters:hf[]        ,x[] , mf

using namespace std;

//==============================================================================================================
int main(void) {
  int x[] = {1, 3, 10, 4, 8, 5, 7, 0};
  int m = 8; /*  sizeof(x) / sizeof(x[0]); */
  element *haffmantree = new element[2 * m - 1];
  haffmans(haffmantree, x, m);
  print(haffmantree, 2 * m - 1);
}
//==============================================================================================================
