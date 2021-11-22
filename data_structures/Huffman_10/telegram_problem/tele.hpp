#ifndef __tele_HPP
#define __tele_HPP

#include <cstdio>
#include <iomanip>
#include <iostream>
using namespace std;
struct element {
  double weight;
  int ch;
  int parent, lchild, rchild;
};
void haffmans(element eles[], char ch[], double x[], int mf);
void haffmans_seleMin(element hff[], int mff, int &s1, int &s2);
void print(element ht[], int mf);
void tele(element ht[], int mf);
void tele_print(element ht[], int k);
int recursions(element htff[], int kf);

#endif