#include<stdio.h>
#include<math.h>
int main(){
    int sqrtnum,t,n,i;
    scanf("%d",&t);
    for(i=1;i<=t;i++){
        scanf("%d",&n);
        sqrtnum = sqrt(n);
        if(sqrt(n)*sqrt(n)==n){
            printf("YES\n");
        }else{
            printf("NO\n");
        }
    }
    return 0;
}