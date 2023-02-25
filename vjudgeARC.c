#include<stdio.h>
int main(){
    int r,c,a11,a12,a21,a22;
    scanf("%d %d %d %d %d %d",&r,&c,&a11,&a12,&a21,&a22);
    if(r==1 && c==1){
        printf("%d",a11);
    }else if(r==1 && c==2){
        printf("%d",a12);
    }else if(r==2 && c==1){
        printf("%d",a21);
    }else if(r==2 && c==2){
        printf("%d",a22);
    }
    return 0;
}
