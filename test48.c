#include<stdio.h>
int main(){
    int s;
    s=sub();
    printf("%d",s);
    return 0;
}

int sub(){
    int a=10,b=9,c;
    c=a-b;
    return c;
}