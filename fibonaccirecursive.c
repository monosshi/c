#include<stdio.h>
fibonacci(int n);

int main(){
    int n,m=0,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        printf("%d\t",fibonacci(m));
        m++;
    }
    return 0;
}
int fibonacci(int n){
    if(n==0||n==1){
        return n;
    }else{
        return (fibonacci(n-1)+fibonacci(n-2));
    }
}
