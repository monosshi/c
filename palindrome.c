#include<stdio.h>
#include<string.h>
int main(){
    char str1[100], str2[100];
    scanf("%s",&str1);
    int d = strcmp(str1,strrev(str1));
    if(d==0){
        printf("Palimdrome");
    }else{
        printf("not Palindrome");
    }

    return 0;
}
