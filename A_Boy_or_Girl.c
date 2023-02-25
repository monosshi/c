#include<stdio.h>
#include<string.h>
int main(){
    int i,j,count=0;
    char name[1000];
    scanf("%s",&name);
    for(i=0;i<strlen(name);i++){
        for(j=i-1;j>=0;j--){
         if(name[i]==name[j]){
            count++;
            break;
         }
        }
    }
    int word =(strlen(name)-count);
    if(word%2==0){
        printf("CHAT WITH HER!\n");
    }else if(word%2!=0){
        printf("IGNORE HIM!\n");
    }
return 0;
}