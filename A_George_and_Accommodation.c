#include<stdio.h>
int main(){
    int t,a,b,count=0;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%d %d",&a,&b);
        int c = b-a;
        if(c>=2){
            count++;
        }
    }
    printf("%d",count);
    return 0;
}
