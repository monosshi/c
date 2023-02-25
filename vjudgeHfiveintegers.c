#include<stdio.h>
int main(){
    int a,b,c,d,e,count=0;
    scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
    if(a=!b || b!=c || c!=d || d!=e){
        count = count +1;
    }
    printf("%d",count);
    return 0;
}