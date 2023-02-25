#include<stdio.h>
int main(){
    int t,i,a,b;
    scanf("%d",&t);
    for(i=0;i<t;i++){
        scanf("%d %d",&a,&b);
        if(a%2==0){
            printf("%d\n",a/2);
        }else if(a%2!=0){
            printf("%d\n",a-b);
        }
    }
    return 0;
}