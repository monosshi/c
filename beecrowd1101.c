#include<stdio.h>
int main(){
    int m,n,i;
    int sum=0;
        scanf("%d %d",&m,&n);
        for(i=n;i<=m;i++){
            printf("%d ",i);
            sum=sum+i;
            }        
   printf("Sum=%d",sum);
    return 0;
}