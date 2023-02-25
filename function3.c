//1st way
int add(){
    int a=2,b=3,c;
    c=a+b;
    return c;
}
#include<stdio.h>
int main(){
    int sum;
    sum= add();
    printf("%d",sum);
    return 0;
}
// 2nd way
void add(int a, int b){
    int c =a+b;
    printf("%d",c);
    return 0;
}

#include<stdio.h>
int main(){
    int x,y,z;
    x=2,y=3;
    add(x,y);
    return 0;
}