#include<stdio.h>
#include<string.h>
int main(){
    char name [20];
    scanf("%[^\n]s",& name);
    printf("%s",name);
    return 0;
}