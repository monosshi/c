#include<stdio.h>
int main(){
    int row,col,n,coef=1;
    printf("Enter n = ");
    scanf("%d",&n);
    for(row=0;row<=n;row++){
        for(col=0;col<=n-row;col++){
            printf(" ");
        }
        for(col=0;col<=row;col++){
            if(col==0||row==0)
            coef=1;
            else
           coef = (coef*(row-col+1)/col);
            printf("%d ",coef);
        }
        printf("\n");
    }
    return 0;
}
