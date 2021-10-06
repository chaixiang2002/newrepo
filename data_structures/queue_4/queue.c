#include <stdio.h>
#define Max 5
typedef int ElemType;
#include "queue.h"

int main(void){
    int i,x;
    
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
    }
    
}