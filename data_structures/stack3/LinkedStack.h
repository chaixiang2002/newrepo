#ifndef LinkedStack_H
#define LinkedStack_H
#include <stdio.h>
#include <stdlib.h>
//typedef int ElemType;
//#define MaxStackSize 100//////////////////////////////////////不能加;

typedef struct{
    ElemType stack[MaxStackSize];
    int top;
} SequenceStack;

void StackInit(SequenceStack *S){
    S->top=0;
}

int StackNotEmpty(SequenceStack S){
    if(S.top<=0)return 0;
    else
     return 1;
}

int StackPush(SequenceStack *S,ElemType x){
    if(S->top>=MaxStackSize){
        printf("this stack is overflow!");
        return 0;
    }
    else {
    S->stack[S->top]=x;
    S->top++;
    return 1;
    }
}

int StackPop(SequenceStack *S,ElemType *d){
    if(S->top<=0){
        printf("this stack is empty!\n");
        return 0;
    }
    else {
    S->top--;
    *d=S->stack[S->top];
    return 1;
    }
}

int StackTop(SequenceStack S,ElemType *d){
    if (S.top<=0) {
    printf("this stack is empty!\n");
    return 0;
    }
    else {
    *d=S.stack[S.top-1];
    return 1;
    }
}
#endif