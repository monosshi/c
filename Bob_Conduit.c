#include<stdio.h>
int main(){
    int t,x,y;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%d %d",&x,&y);
        int z =x+y;
        printf("%d\n",z);
    }
    return 0;
}
