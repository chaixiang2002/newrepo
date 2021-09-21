#include <stdio.h>
/* 
法二
时间复杂度：O（n）

*/
int main(){
    
    int i,n,s=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        if(i%2==0){
            s-=i;
        }
        else{
            s+=i;
        }
    }
    printf("s=%d",s);
    return 0;

}
