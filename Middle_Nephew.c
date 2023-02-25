#include<stdio.h>
int main(){
    int a,b,c;
        scanf("%d %d %d",&a,&b,&c);
        if(a>b && a<c && b<c || a<b && a>c && b>c){
            printf("huguinho\n");
        }else if(b>a && b<c && a<c || b<a && b>c && a>c){
            printf("zezinho\n");
        }else if(c>a && c<b && a<b || c<a && c>b && a>b){
            printf("luisinho\n");
        }
    
    return 0;
}
