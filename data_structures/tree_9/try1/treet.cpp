#include <stdio.h>

#include "treet2.hpp"
int main(void) {
  Tree mytree;
  mytree.root = NULL;

  int n;
  scanf("%d", &n);
  printf("n=%d\n",n);
  flg flg1;
  for (int i = 0; i < n; i++) {
    char temp;
    scanf("%c", &temp);
    printf("tmep=%c  ", temp);
    insert(&mytree, temp,flg1);
  }
  printf("\ninorder:===========================\n");
  inorder(mytree.root);
  printf("\npreorder:==========================\n");
  preorder(mytree.root);
  printf("\npostorder:=========================\n");
  postorder(mytree.root);
  ;


}