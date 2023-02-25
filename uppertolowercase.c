#include<stdio.h>
int main(){
    char q;
    printf("Enter any charcter : ");
    scanf("%c",&q);
    if(q>='A' && q<='Z'){
        printf("You entered upper case  : %c\n",q);
        printf("The lower case for %c is : %c\n",q,q+32);
    }else if(q>='a' && q<='z'){
        printf("You entered lower case  : %c \n",q);
        printf("The upper case for %c is : %c \n",q,q-32);
    }
    return 0;
}
