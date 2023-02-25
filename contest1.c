#include<stdio.h>
int main(){
    int t,i,a,b,c;
    scanf("%d",&t);
    for(i=0;i<t;i++){
        scanf("%d %d %d",&a,&b,&c);
        if(a>b && a<c && b<c || a<b && a>c && b>c){
            printf("%d\n",a);
        }else if(b>a && b<c && a<c || b<a && b>c && a>c){
            printf("%d\n",b);
        }else if(c>a && c<b && a<b || c<a && c>b && a>b){
            printf("%d\n",c);
        }
    }
    return 0;
}
