#include<stdio.h>
int main(){
    int t,a,b,c;
    scanf("%d",&t);
    while(t--){
    scanf("%d %d %d",&a,&b,&c);
    if(a==b|| a==c||b==c){
        printf("NO\n");
    }else if(a==b==c){
        printf("YES\n");
    }else{
        printf("YES\n");
    }
    }
    return 0;
}

