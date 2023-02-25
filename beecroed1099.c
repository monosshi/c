#include<stdio.h>
int main(){
    int t,x,y,sum=0,i;
    scanf("%d",&t);
    for(i=0;i<t;i++){
        scanf("%d %d",&x,&y);
        for(i=x;i<y;i++){
            if(i%2!=0){
                sum = sum +i;
            }
        }
       printf("%d\n",sum);
    }
    

    return 0;
}