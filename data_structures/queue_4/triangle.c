#include <stdio.h>
#define Max 10
typedef int ElemType;
#include "triangle.h"

int main() {
 int  N;
  SeqQueue trique;
  Queinit(&trique);
  printf("How many lines of Yanghui triangle what you want!\n");
  scanf("%d", &N);
  trianglee(N,&trique);
}
