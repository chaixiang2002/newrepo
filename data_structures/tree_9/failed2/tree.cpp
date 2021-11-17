#include "tree.h"


LPBTreeNode *leftchild(LPBTreeNode *p) {
  if (p == std::nullptr_t())
    return std::nullptr_t();
  return p->lchild;
}

LPBTreeNode *rightchild(LPBTreeNode *p) {
  if (p == std::nullptr_t())
    return std::nullptr_t();
  return p->rchild;
}





// //前序
// LPBTreeNode *createbintree(void) {
//   LPBTreeNode *pbnode;
//   char ch;
//   scanf("%c", &ch);
//   printf("123");
//   if (ch == '#') {
//     pbnode = std::nullptr_t();
//   } 
//   else {
//     pbnode = (LPBTreeNode *)malloc(sizeof(LPBTreeNode));
//     if (pbnode == std::nullptr_t()) {
//       printf("Out of space!\n");
//     }
//     pbnode->date = ch;
//     pbnode->lchild = createbintree();
//     pbnode->rchild = createbintree();
//   }
//   return pbnode;
// }

// void Printtree(LPBTreeNode *LPBTreeNode, int n) {
//   int i;
//   if (LPBTreeNode == std::nullptr_t()) {
//     return;
//   }
//   Printtree((LPBTreeNode->rchild), n + 1);
//   /*访问根结点*/
//   for (i = 0; i < n - 1; i++) {
//     printf("    ");
//     printf("%c \n", LPBTreeNode->date);
//   }
//   Printtree(LPBTreeNode->lchild, n + 1);
// }