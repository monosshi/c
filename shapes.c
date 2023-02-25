#include<stdio.h>
int main(){
   int row,colm,n;
   printf("Enter N = \n");
   scanf("%d",&n);
   for(row=1;row<=n;row++){
    for(colm=1;colm<=n;colm++){
        if(row==1||row==n||colm==1||colm==n){
            printf("*");
        }else{
            printf(" ");
        }
    }
    printf("\n");
   }
    return 0;
}
