#include <stdio.h>

int main(){
    float Dous;
    float Amount;
    int Ontime;
    char c;

    printf("please sccanf Oweamout:");
    scanf("%f",&Dous);
    printf("Whether to pay on time? (y/n)\n");
    getchar();
    c=getchar();
    Ontime=(c=='y')?1:0;
    Amount=Ontime?Dous:(Dous*1.1);
     printf("The repayment balance should be changed :%.2f\n",Amount);


}