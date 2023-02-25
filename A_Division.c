#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int a;
        scanf("%d",&a);
        if(a<=1399){
            printf("Division 4\n");
        }else if(a>=1400 && a<=1599){
            printf("Division 3\n");
        }else if(a>=1600 && a<=1899){
            printf("Division 2\n");
        }else if(a>=1900){
            printf("Division 1\n");
        }
    }
    return 0;
}