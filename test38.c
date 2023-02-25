#include<stdio.h>
int main(){
    int x,y,temp;
    printf("X = ");
    scanf("%d",&x);
    printf("Y = ");
    scanf("%d",&y);
    temp=x;
    x=y;
    y=temp;
    printf("X = %d\n",x);
    printf("Y = %d\n",y);
    return 0;
}
