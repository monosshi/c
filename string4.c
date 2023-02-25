#include<stdio.h>
#include<string.h>
toupper();
int main(){
   
    char name[50];
    scanf("%s",&name);
    name[0]=toupper(name[0]);
    printf("%s",name);
    return 0;
}
