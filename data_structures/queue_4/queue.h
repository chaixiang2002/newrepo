#ifndef queue_H
#define queue_H
#include <stdio.h>
//顺序循环队列

typedef struct{
    ElemType queue[Max];
    int rear,front,count;
}SeqQueue;

void Queinit(SeqQueue *Q){
    Q->rear=0;
    Q->front=0;
    Q->count=0;
}

int QueNoEmpty(SeqQueue Q){
    if (Q.front==0) {
    return 0;
    }
    else {
    return 1;
    }
}

int QueApp(SeqQueue *Q,ElemType x){
    if (Q->count>0&&Q->front==Q->rear) {
    printf("The queue is overflowed!");
    return 0;
    }
    else {
    Q->queue[Q->rear]=x;
    Q->rear=(Q->rear+1)%Max;
    Q->count++;
    return 1;
    }
}

int QueDelete(SeqQueue *Q,ElemType *d){
    if (Q->count==0) {
    printf("the queue is empty!\n");
    return 0;
    }
    else {
    *d=Q->queue[Q->front];
    Q->front=(Q->front+1)%Max;
    Q->count--;
    return 1;
    }
}

int QueGet(SeqQueue *Q,ElemType *d){
    if (Q->count==0) {
    printf("The empty !\n");
    return 0;
    }
    else {
    *d=Q->queue[Q->front];
    return 1;
    }
}
void trianglee(int N){
    int i,x,j;   
        SeqQueue trique;
        Queinit(&trique);
        scanf("%d",&N);
       
        for(i=0;i<N+1;i++){                 //控制有N列
           int froutt=0,rearr=0;
           for(j=0;j<i;j++){                //控制第i行的打印和第i+1入队
           QueDelete(&trique,&rearr);
           printf("%d",rearr);
           QueApp(&trique,froutt+rearr);
           froutt=rearr;
           }
           printf("\n");
           QueApp(&trique,1);
        }
}
#endif