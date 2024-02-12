//floydis triangle
/*#include<stdio.h>
int main(){
    int r,c,n,num=1;
    scanf("%d",&n);
    for(r=1;r<=n;r++){
        for(c=1;c<=r;c++){
            printf("%d ",num);
            num++;
        }
        printf("\n");
    }
    return 0;
}*/

//triangle

#include<stdio.h>
int main(){
    int r,c,n;
    scanf("%d",&n);
    for(r=1;r<=n;r++){
        for(c=1;c<=n-r;c++){
            printf(" ");
        }
        for(c=1;c<=r;c++){
            printf(" %d ",r);
        }
        printf("\n");
    }
    return 0;
}
