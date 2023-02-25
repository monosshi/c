#include<stdio.h>
int main(){
    int t,x,y;
    scanf("%d",&t);
    while(t--){
        scanf("%d %d",&x,&y);
        if(x==0){
            printf("1\n");
        }else{
            int p =( y*2+x)+1;
            printf("%d\n",p);
        }
    }
    return 0;
}