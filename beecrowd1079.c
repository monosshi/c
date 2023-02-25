#include<stdio.h>
int main(){
    int n,i;
    double x,y,z;
    double c,d;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%lf %lf %lf",&x,&y,&z);
        c= (x*2)+(y*3)+(z*5);
        d= c/10;
        printf("%.1f\n",d);
    }
    return 0;
}