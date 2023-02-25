// odd numbers between n1 and n2 and sum of them

#include<stdio.h>
int main(){
    int n1,n2,i,sum=0;
    scanf("%d %d",&n1,&n2);
    for(i=n1;i<=n2;i++){
        if(i%2!=0){
            printf("%d ",i);
            sum = sum +i;
        }
    }
    printf("\n%d ",sum);
    return 0;
}
