#include <stdio.h>

#include "treet.h"
int main(void) {
  Tree mytree;
  mytree.root = NULL;
  int n;
  scanf("%d", &n);
  for (int i = 0; i < n; i++) {
    char temp;
    scanf("%c", &temp);
    insert(&mytree, temp);
  }
  inorder(mytree.root);
}