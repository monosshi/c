#include<stdio.h>
int main(){
    int n,m,a;
    scanf("%d %d %d",&n,&m,&a);
    if(n==m){
        printf("%d\n",a);
    }else if(n==a){
        printf("%d\n",m);
    }else if(m==a){
        printf("%d\n",n);
    }
   
    return 0;
}
