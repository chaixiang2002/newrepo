#ifndef triangle_H
#define triangle_H
#include <stdio.h>
//顺序循环队列

typedef struct {
  ElemType queue[Max];
  int front, count;
} SeqQueue;

void Queinit(SeqQueue *Q) {
  Q->front = 0;
  Q->count = 0;
}

int QueNoEmpty(SeqQueue Q) {
  if (Q.front == 0) {
    return 0;
  } else {
    return 1;
  }
}

int QueApp(SeqQueue *Q, ElemType x) {
  Q->queue[(Q->front + Q->count) % Max] = x;
  Q->count++;
  return 1;
}

int QueDelete(SeqQueue *Q, ElemType *d) {
  if (Q->count == 0) {
    printf("the queue is empty!\n");
    return 0;
  }
  *d = Q->queue[Q->front];
  Q->front = (Q->front + 1) % Max;
  Q->count--;
  return 1;
}

void trianglee(int N,SeqQueue *Q) {
     int i, x, j;
  for (i = 0; i < N + 1; i++) {
    int froutt = 0, rearr = 0;
    for (j = 0; j < i; j++) {
      QueDelete(Q, &rearr);
      printf("%3d", rearr);
      QueApp(Q, froutt + rearr);
      froutt = rearr;
    }
    printf("\n");
    QueApp(Q, 1);
  }
  
}

#endif