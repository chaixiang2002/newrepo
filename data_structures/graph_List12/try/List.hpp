#ifndef __List_HPP
#define __List_HPP

#include <iostream>

#define MaxVertices 10
typedef char Elemtype;

typedef struct{
    int row;
    int col;
    int weigt;
} RowCol;
//===============================||
typedef struct Node{
    int adjvex;
    int dest;
    struct Node *next;
} Edge;
typedef struct{
    Elemtype data;
    int source;
    Edge *adj;
} AdjHeight;
typedef struct{
    AdjHeight a[MaxVertices];
    int num_Verts;
    int num_Edges;
} ListGraph;
//===============================||





#endif