#ifndef __gragh_HPP
#define __gragh_HPP
#include <iostream>
using namespace std;

#define Max 10
typedef int  Elemtype;

class Graphnode{
  public:
    Elemtype vertices;
    int edge[Max];

    void set_vertices(Elemtype vert);
    void set_edge(int *ed);
}
void Graphnode::set_vertices(Elemtype vert){
  vertices=vert;
}
void Graphnode::set_edge(int *ed){
  edge=ed;
}

class Graph{
  Graphnode Gnode[Max];
  int num_node;

  void setGrapnode(Graphnode *Gn);
  void setNum_node(int Nnode);
}
void Graph::setGrapnode(Graphnode *Gn){
  Gnode=Gn;
}
void Graph::setNum_node(int Nnode){
  num_node=Nnode;
}




#endif