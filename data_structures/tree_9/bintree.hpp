#ifndef Bintree_HPP
#define Bintree_HPP

#include <iostream>
#include <malloc.h>
typedef char ElemType;

typedef struct bnote{
  ElemType date;
  struct bnote* lchild;
  struct bnote* rchild;
}btree;

bnote* leftchild(btree *p){
  if(p==NULL)return NULL;
  return p->lchild;
}
bnote* rightchild(btree *p){
  if(p==NULL)return NULL;
  return p->rchild;
}


void preorder(btree *t){
  
}

btree *createtreeFromRoot(void){
  btree *note;
  char ch;
  scanf("%c",&ch);
  if(ch=='#')note=NULL;
  else{
    note=(btree *)malloc(sizeof(btree));
    if(note==NULL){
      printf("Out of space!\n");
      return note;
    }
    note->date=ch;
    note->lchild=createtreeFromRoot();
    note->rchild=createtreeFromRoot();
  }
  return note;
}

btree *createtree(void){
  btree *note;
  note=(btree *)malloc(sizeof(btree));
  if(note!=NULL)note=createtreeFromRoot();
  return note;
}

btree *locate(btree *t, ElemType x){
  btree *p;
  if(t==NULL)
    return NULL;
  if(t->date==x)return t;
  else{
    p=locate(t->lchild,x);
    if(p)return p;
    else
    return locate(t->rchild,x);
  }
}

#endif