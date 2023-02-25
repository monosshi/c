#include<stdio.h>
int main(){
    double a,b,c;
    
    scanf("%lf %lf %lf",&a,&b,&c);
    double pi=3.14159;
    double t =0.5 *(a*c);
    double  ci=pi*(c*c);
    double tra=((a+b)/2)*c;
    double sq=(b*b);
    double rec=(a*b);
   printf("TRIANGULO: %.3f\n",t);
   printf("CIRCULO: %.3f\n",ci);
   printf("TRAPEZIO: %.3f\n",tra);
   printf("QUADRADO: %.3f\n",sq);
   printf("RETANGULO: %.3f",rec);
   return 0;

}