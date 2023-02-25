#include<stdio.h>
#include<math.h>
int main(){
    int n;
    int x=5;
    int p;
    scanf("%d",&n);
    p= pow(x,n)+0.5;
    int a = p%100;
    printf("%d",a);
   
    return 0;
}