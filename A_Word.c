#include<stdio.h>
#include<string.h>
int main(){
    int capital=0,small=0,i=0;
    char str[100];
    scanf("%s",&str);
    while(str[i]!='\0')
    {if(str[i]>=65 && str[i]<=90){
         capital++;
    }else if(str[i]>=97 && str[i]<=122){
         small++;
    }
    i++;}
    if(capital>small){
        strupr(str);
        printf("%s",str);
    }else if(capital<=small){
        strlwr(str);
        printf("%s",str);
    }
    return 0;
}