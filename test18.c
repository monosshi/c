#include<stdio.h>
int main(){
    char c [10];
    double a;
    double b;
    printf("");
    scanf("%s",& c);
    printf("");
    scanf("%lf",& a);
    printf("");
    scanf("%lf",& b);
    printf("TOTAL = R$ %.2f\n", a+(b*15/100));
    return 0;
}