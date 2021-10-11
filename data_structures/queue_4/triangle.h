#ifndef triangle_H
#define triangle_H
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

#endif