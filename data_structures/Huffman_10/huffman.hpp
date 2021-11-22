#ifndef __huffman_HPP
#define __huffman_HPP

#include <iomanip>
#include <iostream>
using namespace std;
struct element {
  int weight;
  int parent, lchild, rchild;
};
void haffmans(element eles[], int x[], int mf);
void haffmans_seleMin(element hff[], int mff, int &s1, int &s2);
void print(element ht[], int mf);

//=========================================
void haffmans(element hf[], int x[], int mf) {

  // init haffman[]
  for (int i = 0; i < 2 * mf - 1; i++) {
    if (i < mf) {
      hf[i].weight = x[i];
    }
    hf[i].parent = -1;
    hf[i].lchild = -1;
    hf[i].rchild = -1;
  }
  for (int k = mf; k < 2 * mf - 1; k++) {
    // set 2 min ,s1,s2
    int s1, s2;
    haffmans_seleMin(hf, k, s1, s2); ////is 'k',not mf!!!
    hf[s1].parent = k;
    hf[s2].parent = k;
    hf[k].lchild = s1;
    hf[k].rchild = s2;
    hf[k].weight = hf[s1].weight + hf[s2].weight;
  }
}

//==========================================================
void haffmans_seleMin(element hff[], int mff, int &s1, int &s2) {
  for (int i = 0; i < mff; i++) {
    if (hff[i].parent == -1) { ////////////////////is'==',not '!='
      s1 = i;
      break;
    }
  }
  for (int i = 0; i < mff; i++) {
    if (hff[s1].weight > hff[i].weight && hff[i].parent == -1) {
      s1 = i;
    }
  }
  for (int j = 0; j < mff; j++) {
    if (hff[j].parent == -1 && j != s1) {
      s2 = j;
      break;
    }
  }
  for (int i = 0; i < mff; i++) {
    if (hff[s2].weight > hff[i].weight && hff[i].parent == -1 && i != s1) {
      s2 = i;
    }
  }
}

//============================
void print(element ht[], int mf) {
  //   cout << "index weight parent lChild rChild" << endl;
  cout << "index weight parent lchild rchild" << endl;
  cout << left;
  for (int i = 0; i < mf; ++i) {
    cout << setw(5) << i << " ";
    cout << setw(6) << ht[i].weight << " ";
    cout << setw(6) << ht[i].parent << " ";
    cout << setw(6) << ht[i].lchild << " ";
    cout << setw(6) << ht[i].rchild << endl;
  }
}

#endif