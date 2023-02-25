#include<stdio.h>
#include<math.h>
int main(){
    double a,b,c;
    scanf("%lf %lf %lf ",&a,&b,&c);
    double o=(b*b)-(4*a*c);
    if( o<0 || a==0){
        printf("Impossivel calcular\n");
    }else{
        double e= sqrt(o);
        double r1=(-b+e)/(2*a);
        double r2=(-b-e)/(2*a);
        printf("R1 = %.5f\n",r1);
        printf("R2 = %.5f\n",r2);
    }
    return 0;
}