#include<stdio.h>
int main(){
    char a;
    scanf("%c",&a);
    int n=a;
    if(a>='A' && a<='Z'){
        printf("given letter is capital\n");
        n=n+32;
        printf("its small letter is %c\n",n);
    }else if(a>='a'&& a<='z'){
        printf("given letter is small\n");
        n=n-32;
        printf("its capital letter is %c\n",n);
    }else{
        printf("your input is invalid\n");
    }
    return 0;
}

