//CALCULATOR

#include<stdio.h>
#include<stdlib.h>
int main (){
    double num1;
    double num2;
    char op;
    printf("");
    scanf("%lf", & num1);
    printf("");
    scanf(" %c",& op);
    printf("");
    scanf("%lf", & num2);
    
    if(op =='+'){
        printf("%f", num1+num2);
    }else if(op =='-'){
         printf("%f", num1-num2);
    }else if(op =='/'){
         printf("%f", num1/num2);
    }else if(op == '*'){
        printf("%f",num1*num2);
    }
    return 0;    
}