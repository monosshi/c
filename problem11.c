#include<stdio.h>
int main(){
    int t,n,i,factorial;
    scanf("%d",&t);
    for(i=1;i<=t;i++){
        scanf("%d",&n);
        int f=1,i;
        for(i=2;i<=n;i++){
            factorial = f*i;
            printf("%d",factorial);
        }
        
    }
    return 0;
}