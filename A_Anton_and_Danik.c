#include<stdio.h>
int main(){
    int size,an=0,da=0,a,b,i=0;
    scanf("%d",&size);
    char str[size];
    scanf("%s",&str);
    while(str[i]!='\0'){
      if(str[i] =='A'){
       an++;
        
      }else if(str[i]=='D'){
       da++;
      }
      i++;
     
     
    }
     if(an>da){
        printf("Anton\n");
      }else if(an<da){
        printf("Danik");
      }else if(an==da){
        printf("Friendship\n");
      }
     
    return 0;
}