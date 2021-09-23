#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
typedef int ElemType;
#include "LinkedList.h"

int main(){
    SingleLinkedList *head;
    int i;
    int x;
    ListInit(&head);
    for(i=0;i<10;i++)
        {scanf("%d",&x);
        ListInsert(head,i,x);}
        printf("Linkedlist has been gennerated ,please enter!\n");
        scanf("%d",&i);
        ListDelete(head, i, &x);
        printf("be deletedis:%d\n",x);
        printf("the rest of the linked list is:\n");
        for(i=0;i<Lenth(head);i++){
            ListGet(head,i,&x);
            printf("%d\n",x);
        }
        ListDestroy(&head);

    
    return 0;
}