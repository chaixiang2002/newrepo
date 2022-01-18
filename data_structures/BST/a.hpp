#pragma once
#include <cstdlib>
#include <iostream>
#define Max 21
using namespace std;

template <class T> class BTNode {
public:
  T data;
  BTNode<T> *lchild, *rchild;
  BTNode(T data, BTNode<T> *lchild = NULL, BTNode<T> *rchild = NULL) {
    this->data = data;
    this->lchild = lchild;
    this->rchild = rchild;
  }
  /*friend BSTree;*/
};
template <class T> class BSTree {
public:
  BTNode<T> *root; //指向根结点
  BSTree();
  BSTree(T Inlist[Max]); //中序建二叉排序树
  BTNode<T> *CreatTree(T Inlist[Max], int &i);
  void SercherBST(BTNode<T> *q, T key, BSTree<T> tree, int list[]);
  /*bool empty();*/
};
