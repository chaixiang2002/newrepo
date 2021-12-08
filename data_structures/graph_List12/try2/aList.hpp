#ifndef __aList_HPP
#define __aList_HPP

#include <iostream>

#define MaxVertices 9
typedef char Elemtype;

typedef struct {
  int row;
  int col;
  int weigt;
} RowCol;
//===============================||
typedef struct {
  int Edg_vex;
  int Edg_num;
} Edge;

typedef struct {
  Elemtype data;
  Edge _edge[MaxVertices];
  int parents[MaxVertices];
  int visit; // cx
  int num_Edges;

} Graph_Col;

typedef struct {
  Graph_Col G_Col[MaxVertices];
  int num_Verts;
} ListGraph;
//===============================||

#endif