#ifndef cx_graph_HPP
#define cx_graph_HPP

#include <iostream>
#include <iterator>
#include <ostream>
class graph_date {
public:
  int row[9] = {0, 0, 1, 1, 2, 2, 4, 5, 5};
  int col[9] = {2, 3, 0, 4, 1, 5, 3, 3, 4};
  int weigt[9] = {5, 30, 2, 8, 15, 7, 4, 10, 18};
  char Vertices[6] = {'A', 'B', 'C', 'D', 'E', 'F'};

  int num_edges = 9;
  int num_Vertices = 6;
  void print___() {
    std::cout << "=========================================" << std::endl;
  }
};

class graph_list : public graph_date {
public:
  graph_list(graph_date G) {
    for (int i = 0; i < G.num_edges; i++) {
      grah_row[G.row[i]].grah_col_date[G.col[i]] = G.weigt[i];
    }
    for (int i = 0; i < G.num_Vertices; i++) {
      grah_row->Vertices_list = Vertices[i];
    }
    print_gragh();
  }
  void print_gragh() {
    std::cout << "The Graph-list:" << std::endl;
    for (int i = 0; i < num_Vertices; i++) {
      std::cout << grah_row[i].Vertices_list << '\t';
    }
    std::cout << std::endl;
    for (int i = 0; i < num_Vertices; i++) {
      std::cout << grah_row[i].Vertices_list << '\t';
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
    char Vertices_list;
  };
  graph_col grah_row[6];
};

#endif