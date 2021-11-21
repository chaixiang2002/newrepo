#ifndef __huffman_HPP
#define __huffman_HPP

#include <cstdio>
#define MAXNODE 20
#include <iostream>
#include <limits.h>
#include <malloc.h>
#include <stdlib.h>

struct HtNode {
  int ww;
  int parent, lchild, rchild;
};

struct HtTree {
  int root;
  struct HtNode ht[MAXNODE];
};
typedef struct HtTree PHtTree;

PHtTree *huffman(int m, int *w) {
  PHtTree *pht;
  int i, j, x1, x2, m1, m2;
  pht = (PHtTree *)malloc(sizeof(PHtTree));
  if (pht == NULL) {
    printf("Out of space!\n");
    return pht;
  }
  for (i = 0; i < 2 * m - 1; i++) {
    pht->ht[i].lchild = -1;
    pht->ht[i].rchild = -1;
    pht->ht[i].parent = -1;
    if (i < m) {
      pht->ht[i].ww = w[i];
    } else {
      pht->ht[i].ww = -1;
    }
  }
  for (i = 0; i < m - 1; i++) {
    m1 = INT_MAX;
    m2 = INT_MAX;
    x1 = -1;
    x2 = -1;
    for (j = 0; j < m + 1; j++)
      if (pht->ht[i].ww < m1 && pht->ht[j].parent == -1) {
        m2 = m1;
        x2 = x1;
        m1 = pht->ht[j].ww;
        x1 = j;
      } else if (pht->ht[j].ww < m2 && pht->ht[j].parent == -1) {
        m2 = pht->ht[j].ww;
        x2 = j;
      }
    pht->ht[x1].parent = m + i;
    pht->ht[x1].parent = m + i;
    pht->ht[m + i].ww = m1 + m2;
    pht->ht[m + i].lchild = x1;
    pht->ht[m + i].rchild = x2;
    pht->root = m + i;
  }
  return pht;
}
#endif