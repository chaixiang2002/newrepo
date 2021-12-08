#include "aList.hpp"
#include <iostream>
#include <iterator>
#include <ostream>

// 1.init
//=========================
void AdjInit(ListGraph *G, int num_Vertices_F, int num_Edges_F) {
  int i;
  G->num_Verts = 0;
  for (i = 0; i < num_Vertices_F; i++) {
    G->G_Col[i].visit = 0;
    G->G_Col[i].num_Edges = 0;
    for (int j = 0; j < num_Edges_F; j++) {
      G->G_Col[i]._edge[j].Edg_num = 0;
      G->G_Col[i]._edge[j].Edg_vex = 0;
      G->G_Col[i].parents[j] = 0;
    }
  }
  // std::cout << "G init successfully!" << '\n';
}

// 2.insert vertex
void InsertVertex(ListGraph *G, int i, Elemtype vertex) {
  if (i >= 0 && i < MaxVertices) {
    G->G_Col[i].data = vertex;
    G->num_Verts++;
    // std::cout << "insert Vertex successfully!" << '\n';

  } else
    printf("Verts overflow\n");
}

// 3.Insert Edge
void InsertEdge(ListGraph *G, int row_f, int col_f, int weigt_f) {
  G->G_Col[row_f]._edge[G->G_Col[row_f].num_Edges].Edg_vex = weigt_f;
  G->G_Col[row_f]._edge[G->G_Col[row_f].num_Edges].Edg_num = col_f;
  G->G_Col[row_f].num_Edges++;
  // std::cout << "insert Edge successfully!" << '\n';
}

// 8.
void CreateGraph(ListGraph *G, Elemtype Vertices_F[], int num_Vertices_F,
                 RowCol Edges_F[], int num_Edges_F) {
  int i, k;
  AdjInit(G, num_Vertices_F, num_Edges_F);
  for (i = 0; i < num_Vertices_F; i++)
    InsertVertex(G, i, Vertices_F[i]);
  for (k = 0; k < num_Edges_F; k++)
    InsertEdge(G, Edges_F[k].row, Edges_F[k].col, Edges_F[k].weigt);
}

// 9.digui
void DepthFirstSearch(ListGraph *G, int visit_F) {
  int i = visit_F;
  if (G->G_Col[i].visit == 0) {
    std::cout << G->G_Col[i].data;
    G->G_Col[i].visit = 1;
    for (int k = 0; k < MaxVertices; k++) {
      if (G->G_Col[i]._edge[k].Edg_num == 0) {
        if (G->G_Col[i]._edge[k + 1].Edg_num == 0) {
          break;
        } else {
          DepthFirstSearch(G, G->G_Col[i]._edge[k].Edg_num);
        }
      }
      DepthFirstSearch(G, G->G_Col[i]._edge[k].Edg_num);
    }
  }
}

// 10.
void print_(ListGraph G, int num_Vertices_F, int num_Edges_F) {
  for (int i = 0; i < num_Vertices_F; i++) {
    std::cout << G.G_Col[i].data << '\t';
    for (int j = 0; j < num_Edges_F; j++) {
      std::cout << G.G_Col[i]._edge[j].Edg_num << '\t';
    }
    std::cout << std::endl;
  }
}

// 4.
/* void DeleteEdge(ListGraph *G, int v1, int v2) { printf("no write!\n"); }

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
} */

// 6.
/* int GetNextVex(ListGraph G, int v1, const int v2) {
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
 */

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
