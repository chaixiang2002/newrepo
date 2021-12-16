#ifndef cx_graph_HPP
#define cx_graph_HPP

#include <iostream>
#include <iterator>
#include <ostream>
class graph_data {
public:
  int row[6];
  int col[6];
  int weigt[6];
  char Vertices[6];

  int num_edges;
  int num_Vertices;
  void print___() {
    std::cout << "=========================================" << std::endl;
  }
};
/*
 int row[9] = {0, 0, 1, 1, 2, 2, 4, 5, 5};
  int col[9] = {2, 3, 0, 4, 1, 5, 3, 3, 4};
  int weigt[9] = {5, 30, 2, 8, 15, 7, 4, 10, 18};
  char Vertices[6] = {'A', 'B', 'C', 'D', 'E', 'F'};

  int num_edges = 9;
  int num_Vertices = 6;

*/
class graph_matrix : public graph_data {
public:
  graph_matrix(graph_data G) {
    for (int i = 0; i < G.num_edges; i++) {
      grah_row[G.row[i]].grah_col_date[G.col[i]] = G.weigt[i];
    }
    print_gragh();
  }
  void print_gragh() {
    std::cout << "The Graph-matrix:" << '\n' << "*" << '\t';
    for (int i = 0; i < num_Vertices; i++) {
      std::cout << Vertices[i] << '\t';
    }
    std::cout << std::endl;
    for (int i = 0; i < num_Vertices; i++) {
      std::cout << Vertices[i] << '\t';
      for (int j = 0; j < num_Vertices; j++) {
        std::cout << grah_row[i].grah_col_date[j] << '\t';
      }
      std::cout << std::endl;
    }
    print___();
  }

protected:
  struct graph_col {
    int grah_col_date[6] = {0};
  };
  graph_col grah_row[6];
};

class graph_list : public graph_data {
public:
  graph_list(graph_data G) {}
  void init_graph() {
    for (int i = 0; i < num_Vertices; i++) {
    }
  }
  void insert_insert(int i) {}

private:
  struct edge {
    int Vertice;
    int num;
  };
  struct graph_cal {
    char Date;
    edge *_edge;
    int visited;
    int count_edge;
  };
  struct graph_row {
    graph_cal G_Col[6];
    int count_vertice;
  };
};

#endif