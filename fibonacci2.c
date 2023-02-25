#include<stdio.h>
int main(){
    int x=0,y=1,i,z;
    int n;
    printf("Enter a number  : ");
    scanf("%d",&n);
    if(n==0){
        printf("invalid");
    }else if(n==1){
        printf("%d",x);
    }else{
        printf("%d\t",x);
        printf("%d\t",y);
    for(i=2;i<n;i++){
        z=x+y;
        x=y;
        y=z;
        printf("%d\t",z);
    }
    }
    return 0;
}
