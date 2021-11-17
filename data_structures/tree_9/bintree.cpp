#include "bintree.hpp"
int main(void){
  btree *tree;
  tree=createtree();
  ElemType ss;
  scanf("%c",ss);
  locate(tree,ss);
  printf("%c\n",tree->date);

}

