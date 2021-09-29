#include <malloc.h>
#include <stdio.h>
#include <stdlib.h>
typedef int ElemType;
#define MaxStackSize 100
#include "LinkedStack.h"

int main(void){
    int decimal;
    SequenceStack myStack;
    StackInit(&myStack);
    scanf("%d",&decimal);
    while (decimal) {
        StackPush(&myStack,decimal%2);
        decimal=decimal /2;
    }
    while (StackNotEmpty(myStack)) {
    StackPop(&myStack, &decimal);
    printf("%d",decimal);
    }
    


}