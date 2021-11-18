#ifndef Treet_H
#define Treet_H

#include <cstdlib>
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

void insert(Tree *tree, ElemType value) {
  Node *node = (Node *)malloc(sizeof(Node));
  node->date = value;
  node->left = NULL;
  node->right = NULL;
  if (tree->root == NULL) {
    tree->root = node;
  } else {
    Node *temp = tree->root;
    while (temp != NULL) {
      if (value < temp->date) {
        if (temp->left == NULL) {
          temp->left = node;
          return;
        } else {
          temp = temp->left;
        }

      } else {
        if (temp->right == NULL) {
          temp->right = node;
          return;
        } else {
          temp = temp->right;
        }
      }
    }
  }
  return;
}

void inorder(Node *node) {
  if (node != NULL) {
    inorder(node->left);
    printf("%d", node->date);
    inorder(node->right);
  }
}

#endif