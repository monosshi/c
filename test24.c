#include<stdio.h>
int main(){
    int a,i,n;
    scanf("%d",&a);
    for(i=1;i<=a;i++){
        scanf("%d",&n);
        if(n<0 && n%2==0){
          printf("EVEN NEGATIVE\n");
        }else if(n>0 && n%2==0){
          printf("EVEN POSITIVE\n");
        }else if(n<0 && n%2!=0){
          printf("ODD NEGATIVE\n");
        }else if(n>0 && n%2!=0){
          printf("ODD POSITIVE\n");
        }else if(n==0){
          printf("NULL\n");
        }
    }
    return 0;
}