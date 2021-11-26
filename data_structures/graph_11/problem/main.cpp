#include "graph3.hpp"
#include <iostream>
using namespace std;

int main(){
  Elemtype x[]={'A','B','C','D','E','F'};
  int Size=sizeof(x)/sizeof(x[1]);
  int s[Size][3]={{0,2,5},{0,3,30},{1,0,2},{1,4,8},{2,1,15},{2,5,7},{4,3,4},{5,3,10},{5,4,18}};
  int edgeSize=9;
  Graphnode GNA[Size];
  for(int i=0;i<Size;i++)
  {
    GNA[i].vertices=x[i];
    for(int j=0;j<Size;j++)
    GNA[i].edge[j]=0;
    for(int j=0;j<Size;j++)
    {
      for(int k=0;k<edgeSize;k++){
        if(i==s[k][0]&&j==s[k][1])
          GNA[i].edge[j]=s[k][2];
      }
    }
  }

  // ///////////////////////////////////////////////////////////////
  // for(int i=0;i<Size;i++){
  //   for(int j=0;j<Size;j++){
  //     GNA[i].edge[j]=0;
  //   }
  // }
  //  for(int i=0;i<edgeSize;i++){
  //   GNA[**(s+i)].edge[*(*(s+i)+1)]=*(*(s+i)+2);//is too dandge!!
  // }
  Output(GNA,Size);

  return 0;
}