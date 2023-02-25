#include<stdio.h>
int main(){
    int n,row,col,num=1;
    printf("Enter N = ");
    scanf("%d",&n);
    for(row=1;row<=n;row++){
        for(col=1;col<=row;col++){
            printf("%d ",num);
            num++;
        }
        printf("\n");
    }
    return 0;
}
