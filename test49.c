#include<stdio.h>
int main(){
    int a,b,c;
    a=2,b=3;
    c=addition(a,b);
    printf("%d",c);
    return 0;
}
int addition(int n1 , int n2){
    int n3;
    n3= n1+n2;
    return n3;
}