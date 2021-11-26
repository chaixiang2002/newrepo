#ifndef __gragh_HPP
#define __gragh_HPP

#include <iostream>

#define Max 10
typedef int  Elemtype;

class Graphnode{
  public:
    Elemtype vertices;
    int edge[Max];

    void set_vertices(Elemtype vert);
    void set_edge(int ed[Max]);
};
void Graphnode::set_vertices(Elemtype vert){
  vertices=vert;
}
void Graphnode::set_edge(int ed[Max]){
  edge=ed;
}

class Graph{
  Graphnode Gnode[Max];
  int num_node;

  void setGrapnode(Graphnode Gn[Max]);
  void setNum_node(int Nnode);
};
void Graph::setGrapnode(Graphnode Gn[Max]){
  Gnode=Gn;
}
void Graph::setNum_node(int Nnode){
  num_node=Nnode;
}




#endif