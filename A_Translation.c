#include<stdio.h>
#include<string.h>
int main(){
    char str[100],str1[100];
    scanf("%s",&str);
    scanf("%s",&str1);
    int d =strcmp(str ,strrev(str1));
    if(d==0){
        printf("YES\n");
    }else{
        printf("NO\n");
    }
    return 0;
}
