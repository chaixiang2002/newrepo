#include <stdio.h>
#include <string.h>


#define MaxSize 100                                     //宏
#define N 3
typedef struct{
    char num[5];
    char name[10];
    char age[3];
    char sex[5];
    char sym[100];
}patient;
typedef patient ElemType;
#include "SequenceList.h"                                //自定义头文件


int main(){                                            //变量
patient s;
SequenceList myl;
char find[10];
int i,k;
ListInit(&myl);                                          //实现过程
for(i=0;i<N;i++){
    printf("please scanf %d patient's information!---------------\n",i+1);
    printf("please scanf %d patient's num!\n",i+1);scanf("%s",s.num);
    printf("please scanf %d patient's name!\n",i+1);scanf("%s",s.name);
    printf("please scanf %d patient's age!\n",i+1);scanf("%s",s.age);
    printf("please scanf %d patient's sex!\n",i+1);scanf("%s",s.sex);
    printf("please scanf %d patient's symptom!\n",i+1);scanf("%s",s.sym);
    ListInsert(&myl,i,s);

}
printf("\n--------------------datebase----------------\n");

    printf("please scanf what you want to find!\n");
    scanf("%s",find);
    //printf("%s",find);



    for(k=0;k<i;k++){
        ListGet(myl,k,&s); //if(s.num==find   ||  s.name==find   ||  s.age==find   ||  s.sex==find   ||  s.sym==find  )
       if( strcmp(s.num,find)==0  ||  strcmp(s.name,find)==0  || strcmp(s.age,find)==0 ||  strcmp(s.sex,find)==0  || strcmp(s.sym,find)==0)
      {
         
    printf("%s \n%s \n%s \n%s \n%s \n",s.num,s.name,s.age,s.sex,s.sym);
       }
    }
    return 0;
}

   

    
