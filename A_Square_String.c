#include<stdio.h>
#include<string.h>
int main(){
    int t,i=0;
    char str[1000];
    scanf("%d",&t);
    while(t--){
        scanf("%s",&str);
        int len=strlen(str);
        if(len%2==0){
            printf("YES\n");
        }else{
            printf("NO\n");
        }
    }
    return 0;
}