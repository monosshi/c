#include<stdio.h>
int main(){
    double a,b;
    scanf("%lf %lf",&a,&b);
    double x=(a*3.5)+(b*7.5);
    double y=x/11;
    printf("MEDIA = %.5f\n",y);
    return 0;
}