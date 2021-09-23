#ifndef LinkedList_H
#define LinkedList_H
#include <stdio.h>
#include <stdlib.h>
#include<string.h>
typedef int ElemType;
typedef struct SingleNode{                                              //????
    ElemType date;                      
    struct SingleNode *next;
}SingleLinkedList,*LinkedList;

void ListInit(SingleLinkedList **head){
    if((*head=(SingleLinkedList*)malloc(sizeof(SingleLinkedList)))==NULL){exit(1);}
    (*head)->next=NULL;
}

int Lenth(SingleLinkedList *head){
    SingleLinkedList *p=head;
    int size=0;
    while (p->next!=NULL) {
    p=p->next;
    size++;
    }
   // printf("size=%d\n",size);
    return size;
}

int ListGet(SingleLinkedList *head,int i,ElemType *x){
   // printf("sdsada\n");
    SingleLinkedList *p;
    int j;
    p=head;
    j=-1;
    while (p->next!=NULL&&j<i) {
    p=p->next;j++;

    }
    if(j!=i){
        printf("Error taking element positon argument");
        return 0;
    }
    *x=p->date;
    return 1;
}
int ListInsert(SingleLinkedList *head,int i,ElemType x){     //小-->>大
    SingleLinkedList*p,*q;
    int j;
    p=head;
    j=-1;
    while (p->next!=NULL && x>p->date   &&  j<i-1) {
    p=p->next;
    j++;
    }
    if (j!=i-1) {
    printf("insert position parameter error!");
    return 0;
    }
    if((q=(SingleLinkedList *)malloc(sizeof(SingleLinkedList)))==NULL)
    {exit(1);}
    q->date=x;
    q->next=p->next;
    p->next=q;
    return 1;

}

int ListDelete(SingleLinkedList *head,int i,ElemType *x){
    SingleLinkedList *p,*s;
    int j;
    p=head;
    j=-1;
    while (p->next!=NULL&&p->next->next!=NULL&&j<i-1) {
    p=p->next;
    j++;
    }
    if(j!=i-1){
        printf("insert position parameter 12error!");
    }
    s=p->next;
    *x=s->date;
    p->next=s->next;
    free(s);
    return 1;

}

void ListDestroy(SingleLinkedList **head){
    SingleLinkedList *p,*p1;
    p=*head;
    while (p!=NULL) {
    p1=p;
    p=p->next;
    free(p1);
    }
    *head=NULL;
}


#endif