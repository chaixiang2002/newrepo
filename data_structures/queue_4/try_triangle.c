#include <stdio.h>
#define Max 10
typedef int ElemType;
#include "triangle.h"

int main(void){
    int i,x,j;
    /* 
    SeqQueue myqueue;
    Queinit(&myqueue);
    for(i=0;i<4;i++){
        scanf("%d",&x);
        if (QueApp(&myqueue,x)==0) {
        printf("eorror 1!\n");
        return 0;
        }
    }


    for(i=0;i<4;i++){
    if (QueGet(&myqueue,&x)==0) {
        printf("eror 2!\n");
        return 0;
    }
    else {
     printf("put:%d\n",x);
    }  
    QueDelete(&myqueue,&x);
    printf("D:%d\n",x);
    } */

   
        SeqQueue trique;
        Queinit(&trique);
        for(i=0;i<3;i++)
        QueApp(&trique,1);
       /*  for(j=0;j<1;j++){
            QueDelete(&trique,&x);
            printf("%d",x);
        }
        printf("\n");
        int max_i=2,max_j=1,add=0;
        for(){
            max_i++;max_j++;
            for (i=0; i<max_i; i++) {
                QueGet(&trique,&add)
                QueApp(&trique,)
            }
            
        } */
       /* // int froutt=1,rearr=0;
        QueGet(&trique,&tmp);
        printf("%d",tmp);
        QueDelete(&trique,&tmp2);
        printf("%d",tmp2);
        tmp+=tmp2;
        QueApp(&trique,tmp);
 */
        for(i=0;i<N;i++){

           int froutt=0,rearr=0;
           for(j=0;j<i;i++){
           QueDelete(&trique,&rearr);
           printf("%d",rearr);
           QueApp(&trique,froutt+rearr);
           froutt=rearr;
           }
           QueApp(&trique,1);
        }


        
/* 
        QueDelete(&trique,&rearr);
        printf("%d",froutt);
        QueApp(&trique,froutt+rearr);
        QueDelete(&trique,&rearr);
        printf("%d",rearr);
        froutt=rearr; */
       

        QueApp(&trique,tmp);
        tmp=chu;
 
        QueApp(&trique,1);

    




}