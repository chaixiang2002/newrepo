#include <stdio.h>
#include <string.h>
#define Mise 20

typedef char ElemType;
#include "paren.h"
int main(void){
    char line[20];
    int i=0,flag=0;
    SequencePar myList;
    SeqInit(&myList);
    scanf("%s",line);
    while (line[i++]!='\0') {
    if(    line[i-1]=='{'  ||  line[i-1]=='['  ||  line[i-1]=='('  ){
        SeqPush(&myList,line[i-1]);
            }

    
    if (   line[i-1]==']'  ||  line[i-1]=='}'  ||  line[i-1]==')' ) {
        SeqPull(&myList,line[i-1]);
        

        }
    }
    return 0;
}


