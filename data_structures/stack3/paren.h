#ifndef paren_H
#define paren_H
#include <stdio.h>
 int k=0;

typedef struct {
    ElemType pare[Mise];
    int top;
} SequencePar;

void SeqInit(SequencePar *S){
    S->top=0;
}

int SeqNot(SequencePar S){
    if(S.top<=0)return 0;
    else
     return 1;;
}

int SeqPush(SequencePar *S,ElemType x){
    if (S->top>=Mise) {
    printf("The stack is overflew!\n");return 0;
    }
    else {
    if (    x=='{'  ||  x=='['  ||  x=='('  ) {
    S->top++;
    S->pare[S->top]=x;
  //////////////////////////////////////////////////////////////////  printf("in:%c\n",S->pare[S->top]);
    
    return 1;
    }
    else {}
    }
}

int SeqPull(SequencePar *S,ElemType d){
   

    if(S->top<=0){
        printf("this stack is empty!\n");
        return 0;
    }
    else { 
  
         if(S->pare[S->top]=='{'&&d=='}'){
    ///////////////////////////////////////////     printf("on:%c,line[i]:%c",S->pare[S->top],d);
          S->top--;
        return 0;
    }
    else if(S->pare[S->top]=='['&&d==']'){  
   ////////////////////////////////////////////      printf("on:%c,line[i]:%c",S->pare,d);
          S->top--;
        return 0;
    }
    else if(S->pare[S->top]=='('&&d==')'){ 
  //////////////////////////////////////////       printf("on:%c,line[i]:%c",S->pare[S->top],d);
          S->top--;
        return 0;
    }
    else {
  printf("eorroer%d\n",k);
  //////////////////////////////////////////  printf("on:%c,line[i]:%c",S->pare[S->top],d);
    }
  
    } 
}
#endif