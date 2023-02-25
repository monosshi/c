#include<stdio.h>
int main(){
    int n,t,i,lastnum,sum;
    scanf("%d",&t);
    for(i=1;i<=t;i++){
        scanf("%d",&n);
        lastnum = n%10;
        while(n>9){
            n=n/10;
        }
        sum= n+lastnum;
        printf("sum = %d",sum);
    }
    return 0;
}
