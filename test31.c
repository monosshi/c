#include<stdio.h>
int main(){
    int a,b,c,d;
    double x,y;
    scanf("%d %d %lf",&a,&b,&x);
    scanf("%d %d %lf",&c,&d,&y);
    double z= (b*x)+(d*y);
    printf("VALOR A PAGAR: R$ %.2f\n",z);
    return 0;
}
