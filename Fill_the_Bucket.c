#include<stdio.h>
int main(){
    int t,i,a,b;
    scanf("%d",&t);
    for(i=0;i<t;i++){
        scanf("%d %d",&a,&b);
        int c = a-b;
        printf("%d\n",c);       
    }
    return 0;
}