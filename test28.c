#include<stdio.h>
int main(){
    double a,b,c;
    scanf("%lf %lf %lf",&a,&b,&c);
    double x=(a*2)+(b*3)+(c*5);
    double y= x/10;
    printf("MEDIA = %.1f\n",y);
    return 0;
}