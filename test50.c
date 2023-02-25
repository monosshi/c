#include<stdio.h>
int main(){
    int a,b,c;
    a=34,b=45;
    c=condition(a,b);
    printf("%d is the big value",c);
    return 0;
}

int condition(int n1 ,int n2){
    int big;
    if (n1>n2){
        big=n1;
    }else{
        big=n2;
    }
    return big;
}
