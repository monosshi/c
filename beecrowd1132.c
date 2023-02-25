#include<stdio.h>
int main(){
    int x,y,i;
    scanf("%d %d",&x,&y);
    for(i=x;i<=y;i++){
        if(i%13==0){
           int sum=0;
            sum=sum+i;
            sum++;
            printf("%d\n",sum);
        }
    }
    return 0;
}