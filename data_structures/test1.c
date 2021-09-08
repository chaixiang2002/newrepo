#include <stdio.h>
/* 
法一
时间复杂度：O（1）

*/
int main(){
    int i,n=0;
    scanf("%d",&n);
    if(n%2==0){
        printf("S=%d",-n/2);
    }
    else{
        n=n/2+1;
        printf("S=%d",n);
    }
    return 0;

}
