#include<stdio.h>
int main(){
    int n1,n2,x;
    printf("enter two numbers = ");
    scanf("%d %d",&n1,&n2);
    x = check(n1,n2);
    return 0;
}
void check (int a , int b){
    if(a>b){
        printf("Maximum num is %d",a);
    }else{
        printf("Maximum num is %d",b);
    }
    return 0;
}