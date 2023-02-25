#include<stdio.h>
int main(){
    int t,i,a;
    scanf("%d",&t);
    for(i=0;i<t;i++){
        scanf("%d",&a);
        if(a<3){
            printf("LIGHT\n");
        }else if(a>=7){
            printf("HEAVY\n");
        }else if(a>=3 && a<7){
            printf("MODERATE\n");
        }
    }
    return 0;
}