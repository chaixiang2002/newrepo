#ifndef string4_H
#define string4_H

#include <stdio.h>
typedef struct{
    char ch[Max];
    int len;
} Stringg;

//初始化
void Strinit(Stringg *S){
    S->len=0;
    
}

//
int StrAdd(Stringg *S,char *A){
    S->ch=*A;
     S->len=sizeof(A);
    if (sizeof(A)<Max) {
     return 1;
    }
    else {
     return 0;
    }
   
}

int StrPut(Stringg *S,char *P){
    if(S->len==0){
        printf("error!The string is empty\n");
        return 0;
    }
    else {
    *P=S->ch;
    printf("put suessfilly!\n");
    return 1;
    }
}

//串的连接，分三情况
int Concat(Stringg *S,Stringg *Q){
    int i,flag=0;
    if (S->len+Q->len<=Max) {
    for(i=S->len;i<Q->len+S->len;i++){
        S->ch[i]=Q->ch[i-S->len];
    }
    S->len+=Q->len;
    printf("1\n");
    flag=1;
    }
    else if (S->len+Q->len>Max) {
    for (i=S->len; i<Max; i++) {
    S->ch[i]=Q->ch[i-S->len];
    }
    printf("2\n");
    S->len=Max;
    flag=0;
    }

}



#endif