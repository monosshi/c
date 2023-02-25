#include<stdio.h>
int main(){
    float a,b,c;
    scanf("%f %f %f",&a,&b,&c);
    float per = a+b+c;
    float ar =(0.5*(a+b)*c);
    if(a+b>c && b+c>a && a+c>b){
        printf("Perimetro = %.1f\n",per);
    }else{
        printf("Area = %.1f\n",ar);
    }
    return 0;
}
