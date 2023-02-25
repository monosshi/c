#include<stdio.h>
int main(){
    int n,i,x,sum=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%d",x);
        for(i=1;i<=x;i++){
        sum = sum+i;   
        }
          
    }
     printf("%d",sum);
  
    return 0;
}
