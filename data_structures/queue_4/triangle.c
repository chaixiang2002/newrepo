#include <stdio.h>
#define Max 10
typedef int ElemType;
#include "triangle.h"

int main(void){
int i,x,j,N;

   
        SeqQueue trique;
        Queinit(&trique);
        printf("How many lines of Yanghui triangle what you want!\n");
        scanf("%d",&N);
       
    
        for(i=0;i<N+1;i++){

           int froutt=0,rearr=0;
           for(j=0;j<i;j++){
           QueDelete(&trique,&rearr);
           printf("%d",rearr);
           QueApp(&trique,froutt+rearr);
           froutt=rearr;
           }
           printf("\n");
           QueApp(&trique,1);
           
        }



}