#include<stdio.h>
int main(){
    int n,i;
    int i1=i*i;
    int i2=i*i*i;
    scanf("%d",&n);
    for(i=1;i<=n+1;i+=1){
        printf("%d %d %d\n",i,i1,i2);
    }
    return 0;
}