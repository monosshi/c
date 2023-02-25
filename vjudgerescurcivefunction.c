#include<stdio.h>
int main(){
    int n,i;
    scanf("%d",n);
    for(i=n;i>1;i--){
        n=n*(n-1);
        }
    return 0;
}