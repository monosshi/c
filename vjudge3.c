#include<stdio.h>
int main(){
    int a,b,c,d,e;
    scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
    if(a==b && b==c  && d==e || a==b && c==d && d==e||c==d && a==b && b==e || a==c && c==e && b==d||a==e && b==c && c==d){
        printf("Yes");
    }else{
        printf("No");
    }

    return 0;
}