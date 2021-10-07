#include <stdio.h>
#define Max 100
#include "string4.h"
int main(void){
    char *str,*str3;
    scanf("%s",str);
    printf("sts:%s\n",str);
    Stringg str2;
    Strinit(&str2);
    StrAdd(&str2, str);
    StrPut(&str2, str3);
    printf("str3:%s\n",str3);

}