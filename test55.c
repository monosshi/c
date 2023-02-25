#include<stdio.h>
int main(){
    int i=1,j=2,k=3,m=2;
    printf("%d\n",j==3);
    printf("%d\n",i>=1 && j<4);
    printf("%d\n",j>=i||k==m);
    printf("%d\n",!(k>m));
    printf("%d\n",i<m && m==j);

    return 0;
}
