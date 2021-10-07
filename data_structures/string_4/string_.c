#include <stdio.h>

#include "string4.h"
int main(void){
    //char *str,*str3;
    char str[20],str3[20];
    scanf("%s",str);
    printf("sts:%s\n",str);
    Stringg str2;
    Strinit(&str2);
    StrAdd(&str2, str);
    StrPut(&str2, str3);
    printf("str3:%s\n",str3);

}