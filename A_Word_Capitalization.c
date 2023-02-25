#include<stdio.h>
#include<string.h>
int main(){
    int toupper();
    char name[20];
    scanf("%s",&name);
    name[0]=toupper(name[0]);
    printf("%s\n",name);
    return 0;
}
