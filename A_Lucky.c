/*#include<stdio.h>
int main(){
    
    int t;
    scanf("%d",& t);
    while(t--){
    int a[6];
    int i;
    for(i=0;i<6;i++){
     scanf("%d",&a[i]);
    }
   int x = a[0]+a[1]+a[2];
   int y = a[3]+a[4]+a[5];
   if(x==y){
    printf("YES\n");
   }else{
    printf("NO\n");
   }
    }
    return 0;
}*/
#include<stdio.h>
int main(){
    
    int t;
    scanf("%d",& t);
    while(t--){
    int a[7];
    int i;
     scanf("%s",&a);  
    int x = a[0]+a[1]+a[2];
    int y = a[3]+a[4]+a[5];
   if(x==y){
    printf("YES\n");
   }else if(x!=y){
    printf("NO\n");
   }
    }
    return 0;
}