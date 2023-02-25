#include<stdio.h>
#include<string.h>
 int size;
     
int main(){
    int t,q=0,a=0,i=0;
    char name[size];
    
    scanf("%d",&t);
    while(t--){
     scanf("%d",&size);
     char name[size];
    
     scanf("%s",&name);
    i=0,q=0,a=0;
     while(name[i]!='\0'){
        if(name[i] =='A'){
         a++;
         
        }else if(name[i] =='Q'){
         q++;
         
        }
        i++; 
    
    
     }
    if(a==q){
      printf("Yes\n");
    }else if(a>q){
      printf("Yes\n");
     
    }else if(q>a){
      printf("No\n");
    }
   
}
return 0;
}