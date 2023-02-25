#include<stdio.h>
int main(){
    int l1,l2,r1,r2;
    scanf("%d %d %d %d",&l1,&r1,&l2,&r2);
    if(r1>l2){
        int p =r1-l2;
        printf("%d",p);
    }else if(r1<l2){
        printf("0");
    }else if(r1==l2){
        printf("0");
    }
    return 0;
}