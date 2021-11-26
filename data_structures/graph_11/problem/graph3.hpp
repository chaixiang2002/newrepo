#ifndef __gragh3_HPP
#define __gragh3_HPP

#include <iostream>

#define Max 6
typedef char Elemtype;

// class RowColWeight{
//   public:
//   int r,c,weight;
// };
class Graphnode{
  public:
  Elemtype vertices;
  int edge[Max];
};

void Output(Graphnode GN[],int fSize){
  std::cout<<"Vertices:"<<std::endl;
  for(int i=0;i<fSize;i++){
    std::cout<<GN[i].vertices<<'\t';
  }
  std::cout<<std::endl;
  std::cout<<"weight:"<<std::endl;
  for(int i=0;i<fSize;i++){
    for(int j=0;j<fSize;j++){
      std::cout<<GN[i].edge[j]<<'\t';
    }
    std::cout<<std::endl;

  }

}


#endif