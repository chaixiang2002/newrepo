#ifndef SequenceList_H
#define SequenceList_H
#include <stdio.h>
#include <stdlib.h>
#include<string.h>


typedef struct{
    ElemType list[MaxSize];
    int size;
}SequenceList;


void ListInit(SequenceList *L){
    L->size=0;
}


int ListInsert(SequenceList*L,int i,ElemType x){
    int j;
    if(L->size >=MaxSize){
        printf("Sequencelist  overflow!!\n");
        return 0;
    }
    else if(i<0 ||  i>L->size){
        printf("parametee 'i' is invalid when inserted!\n");
        return 0;
    }
    else{
        for(j=L->size;j>=i;j--){
            L->list[j]=L->list[j-1];
            L->list[i]=x;
            L->size++;
            return 1;
        }
    }
}

int ListGet(SequenceList L ,int i,ElemType *x){
   
    if(i<0 || i>L.size){                                                            //?
        printf("parametee 'i' is invalid when getten!");
        return 0;
    }
    else{
        *x =L.list[i];

        return 1;
    }
}


int Length(SequenceList L){
    return L.size;
}

#endif