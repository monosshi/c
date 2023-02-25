#include<stdio.h>
#include<string.h>
int main(){
    int toupper();
    int strcmp();
    int t,i=0;
    char str1[1000];
    scanf("%d",&t);
    while(t--){
        i=0;
        scanf("%s",&str1);
        while(str1[i]!='\0'){
        str1[i]=toupper(str1[i]);
        i++;}
        char str2[]="YES";
        int d = strcmp(str1,str2);
        if(d==0){
            printf("YES\n");
        }else{
            printf("NO\n");
        }
        

    }
    return 0;
}

