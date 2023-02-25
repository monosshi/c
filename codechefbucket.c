#include<stdio.h>
int main(){
    int t,i,a,b,c,d;
    scanf("%d",&t);
    for(i=0;i<t;i++){
        scanf("%d %d %d %d",&a,&b,&c,&d);
        int x = (a+(c*d));
        if(x<b){
            printf("Unfilled\n");
        } else if(x>b){
            printf("overFlow\n");
        }else if(x==b){
            printf("filled\n");
        }
    }
    return 0;
}