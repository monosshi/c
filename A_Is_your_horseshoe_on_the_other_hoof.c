#include<stdio.h>
int main(){
    int a,b,c,d;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    if(a==b && b==c && c==d && d==a){
        printf("3\n");
    }else if(a==b && b==c && c!=d || a==c && c==d && b!=d || a==b && b==d && c!=d || b==c && c==d && a!=d){
        printf("2\n");
    }else if(a==b && c!=d || a!=b && c==d || a!=d && b==c || a==c && b!=d || a==d && b!=c){
        printf("1\n");
    }else if(a==b && c==d || a==c && b==d || a==d && b==c){
        printf("2\n");
    }else if(a!=b && b!=c && c!=d && d!=a){
        printf("0\n");
    }
    return 0;
}





