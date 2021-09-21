#include <stdio.h>
#include <string.h>

void main(void)
{
    char* str_1 = "abc" ; char * str_2 = "abc" ; char* str_3 = "ABC" ;
    if (strcmp(str_1,str_2) == 0)
        printf("str_1 is equal to str_2. \n");
    else
        printf("str_1 is not equal to str_2. \n");
    if (strcmp(str_1, str_3) == 0)
       printf("str_1 is equal to str_3．\n");
    else
        printf("str_1 is not equalto str_3．\n");
}