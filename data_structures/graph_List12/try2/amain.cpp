#include "aList.cpp"
#include "aList.hpp"
#include <cstdio>
#include <iostream>
// Actual parameters:       _A
// Formal parameters:       _F
using namespace std;
int main() {
  int s[9][3] = {{0, 2, 5}, {0, 3, 30}, {1, 0, 2},  {1, 4, 8}, {2, 1, 15},
                 {2, 5, 7}, {4, 3, 4},  {5, 3, 10}, {5, 4, 18}};
  Elemtype Vertices_A[] = {'A', 'B', 'C', 'D', 'E', 'F'};
  int num_Vertices_A = 6;
  int num_Edges_A = 9;
  RowCol RC[9];
  for (int i = 0; i < 9; i++) {
    RC[i].row = s[i][0];
    RC[i].col = s[i][1];
    RC[i].weigt = s[i][2];
  }
  ListGraph Graph_List;
  CreateGraph(&Graph_List, Vertices_A, num_Vertices_A, RC, num_Edges_A);
  print_(Graph_List, num_Vertices_A, num_Edges_A);
  DepthFirstSearch(&Graph_List, 0);
  cout << endl;
  CreateGraph(&Graph_List, Vertices_A, num_Vertices_A, RC, num_Edges_A);
}