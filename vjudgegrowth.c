#include<stdio.h>
int main(){
    int n,m,x,t,d;
    scanf("%d %d %d %d %d",&n,&m,&x,&t,&d);
    if(n!=x){
        printf("%d",t);
    }else if(n==x){
        printf("%d",x-m);
    }
}