#ifndef Tree_H
#define Tree_H

#define MAXSIZE 20
typedef int ElemType;
typedef struct LBinaryTreeNode {
  ElemType date;
  struct LBinaryTreeNode *lchild;
  struct LBinaryTreeNode *rchild;
} LPBTreeNode;

#endif