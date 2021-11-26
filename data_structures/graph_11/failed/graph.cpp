#include "graph.hpp"
#include <iostream>
using namespace std;
class RowColWeight{
  public:
    int r;
    int c;
    int weight;
    void set_r();
    void set_c();
    void set_w();
};

void Output(Graph GAF,int fSize){
  cout<<"Vertices:"<<endl;
  for(int i=0;i<fSize;i++){
    cout<<(GAF.Gnode[i]).vertices;
  }
  cout<<endl;

  cout<<"weight:"<<endl;
  for(int i=0;i<fSize;i++){
    for(int j=0;j<fSize;j++){
      cout<<(GAF.Gnode[i]).edge[j];
    }
    cout<<endl;

  }

}

int main(void){
  Elemtype x[]={1,2,3,4,5,6};
  int Size=sizeof(x)/sizeof(x[1]);
  RowColWeight s[Size]={{0,1,8},{1,2,7},{1,3,4},{2,4,8},{4,5,2},{5,3,5}};
   Graph GA;
  Graphnode GNA[Size];
  for(int i=0;i<Size;i++){
    GNA[i].set_vertices(x[i]);
    GNA[i].set_edge(s[i][Size]);//////////////////////////
  }
  GA.setGrapnode(GNA[Size]);
  GA.setNum_node(Size);
}