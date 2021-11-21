#ifndef Treet2_H
#define Treet2_H

#include <malloc.h>
#include <stdio.h>
#define ElemType char
typedef struct node {
  ElemType date;
  struct node *left;
  struct node *right;
} Node;




typedef struct {
  Node *root;
} Tree;

class flg{
  public:
  int flagg=0;
  Node *temp2;
  void change();
  void change1(Node *temp);
};
void flg::change(){
  flagg=-flagg;
  
}
void flg::change1(Node *temp){
  
   Node *temp2=temp;
}


void insert(Tree *tree, ElemType value,flg flg2) {
  Node *node = (Node *)malloc(sizeof(Node));
  node->date = value;
  node->left = NULL;
  node->right = NULL;
  if (tree->root == NULL) {
    tree->root = node;
  }
  else {
    Node *temp = tree->root;
   
    while (temp != NULL) {
      
        if (temp->left == NULL) {
          temp->left = node;
          return;
        } 
        
         else if (temp->right == NULL) {
          temp->right = node;
          if(flg2.flagg==1){
            temp = flg2.temp2;
          flg2.change();
          }
          else{
            return;
          }
        } 
        else {
          temp = temp->left;
          flg2.change();
          flg2.change1(temp->right);

          // temp2 = temp->right;
        }
        
   
       
      
    }
  }
  
}

void inorder(Node *node) {
  if (node != NULL) {
    inorder(node->left);
    printf("node->date%c", node->date);
    if(node->left!=NULL)printf("  left=%c  ",node->left->date);
    if(node->right!=NULL)printf("  right=%c  ",node->right->date);
    printf("\n");
    inorder(node->right);
    printf("\n");
  }
}

void preorder(Node *node){
  if(node !=NULL){
    printf("node->date%c", node->date);
    if(node->left!=NULL)printf("  left=%c  ",node->left->date);
    if(node->right!=NULL)printf("  right=%c  ",node->right->date);
    printf("\n");
    inorder(node->left);
    inorder(node->right);
  }
}

void postorder(Node *node){
  if(node !=NULL){
    inorder(node->left);
    inorder(node->right);
      printf("node->date%c", node->date);
    if(node->left!=NULL)printf("  left=%c  ",node->left->date);
    if(node->right!=NULL)printf("  right=%c  ",node->right->date);
    printf("\n");
  }
}


#endif