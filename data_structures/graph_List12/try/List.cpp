#include "List.hpp"
#include <cstdio>
#include <iostream>

// 1.init
//=========================
void AdjInit(ListGraph *G) {
  int i;
  G->num_Edges = 0;
  G->num_Verts = 0;
  for (i = 0; i < MaxVertices; i++) {
    G->a[i].source = i;
    G->a[i].visit = 0;
    G->a[i].adj = NULL;
  }
}

// 2.insert vertex
void InsertVertex(ListGraph *G, int i, Elemtype vertex) {
  if (i >= 0 && i < MaxVertices) {
    G->a[i].data = vertex;
    G->num_Verts++;
  } else
    printf("Verts overflow\n");
}

// 3.Insert Edge
void InsertEdge(ListGraph *G, int v1, int v2) {
  Edge *p;
  if (v1 < 0 || v1 >= G->num_Verts || v2 < 0 || v2 >= G->num_Verts) {
    printf("v1 or v2 is overflow\n");
    exit(0);
  }
  p = new Edge(); //???????????????
  p->dest = v2;   //??????
  p->next = G->a[v1].adj;
  G->a[v1].adj = p;
  G->num_Edges++;
}

// 4.
void DeleteEdge(ListGraph *G, int v1, int v2) { printf("no write!\n"); }

// 5.Get First Vex
int GetFirstVex(ListGraph G, int v) {
  Edge *p;
  if (v < 0 || v > G.num_Verts) {
    printf("v1 or v2 is overflow_2\n");
    exit(0);
  }
  p = G.a[v].adj;
  if (p != NULL)
    return p->adjvex;
  else
    return -1;
}

// 6.
int GetNextVex(ListGraph G, int v1, const int v2) {
  Edge *p;
  if (v1 < 0 || v1 > G.num_Verts || v2 < 0 || v2 > G.num_Verts) {
    printf("v1 or v2 overflow!\n");
    exit(0);
  }
  p = G.a[v1].adj;
  while (p != NULL) {
    if (p->dest != v2) { //////???????????
      p = p->next;
      continue;
      // continue语句用于循环语句中，
      //作用是不执行循环体剩余部分，
      //直接进行下次循环。
    } else
      break;
  }
  p = p->next;
  if (p != NULL)
    return p->adjvex;
  else
    return -1;
}

// 7. Destroy
void AdjDestroy(ListGraph *G) {
  int i;
  Edge *p, *q;
  for (i = 0; i < G->num_Verts; i++) {
    p = G->a[i].adj;
    while (p != NULL) {
      q = p->next;
      free(p);
      p = q;
    }
  }
}

// 8.
void CreateGraph(ListGraph *G, Elemtype Vertices_F[], int num_Vertices_F,
                 RowCol Edges_F[], int num_Edges_F) {
  int i, k;
  AdjInit(G);
  for (i = 0; i < num_Vertices_F; i++)
    InsertVertex(G, i, Vertices_F[i]);
  for (k = 0; k < num_Edges_F; k++)
    InsertEdge(G, Edges_F[k].row, Edges_F[k].col);
}

// 9.
/* //
void DepthFSearch(ListGraph G, int v, int visited[]) {
  int w;
  printf("%c  ", G.a[v].adj->adjvex);
  visited[v] = 1;
  w = GetFirstVex(G, v);
  while (w != -1) {
    if (!visited[w])
      DepthFSearch(G, w, visited);
    w = GetNextVex(G, v, w);
  }
} */

// 9.digui
void DepthFirstSearch(ListGraph G, int visit_F) {
  int i = visit_F;
  if (G.a[i].visit == 0) {
    std::cout << G.a[i].data;
    G.a[i].visit = 1;
  }
  while (G.a[i].adj->adjvex != 0) {
    DepthFirstSearch(G, G.a[i].adj->adjvex);
  }
}