#include "graph2.hpp"
#include <iostream>
using namespace std;

int main(){
  Elemtype x[]={1,2,3,4,5,6};
  int Size=sizeof(x)/sizeof(x[1]);
  int s[Size][3]={{0,1,8},{1,2,7},{1,3,4},{2,4,8},{4,5,2},{5,3,5}};
  Graphnode GNA[Size];
  for(int i=0;i<Size;i++)
  {
    GNA[i].vertices=x[i];
    for(int j=0;j<Size;j++)
    GNA[i].edge[j]=0;
    for(int j=0;j<Size;j++)
    {
      for(int k=0;k<Size;k++){
        if(i==s[k][0]&&j==s[k][1])
          GNA[i].edge[j]=s[k][2];
      }
    }
  }
  Output(GNA,Size);

  return 0;
}