#ifndef Tree_H
#define Tree_H

#include <cstddef>
#include <iostream>
#include <malloc.h>
#include <stdio.h>
#define MAXSIZE 20
typedef char ElemType;
typedef struct LBinaryTreeNode {
  ElemType date;
  struct LBinaryTreeNode *lchild;
  struct LBinaryTreeNode *rchild;
} LPBTreeNode,*LBinaryTree;

#endif