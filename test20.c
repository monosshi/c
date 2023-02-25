#include<stdio.h>
#include<math.h>
int main(){
    double a,b;
    double c,d;
    scanf("%lf %lf",& a,& b);
    scanf("%lf %lf",& c,& d);
    printf("%.4f\n",sqrt(((c-a)*(c-a)+(d-b)*(d-b))));
    return 0;
}
