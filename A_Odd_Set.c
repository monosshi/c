#include<stdio.h>
int main(){
    int t,a,i=0,x,odd=0,even=0,j;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&a);
        int p = a*2;
        int x[p];
        for(int i=0;i<p;i++){
            scanf("%d",&x[i]);
        }
            int odd=0,even=0;
            for(i=0;i<p;i++){
              
             if(x[i]%2!=0){
               odd++;
             }else{
                even++;
             }
            }
            
            if(odd!=even){
            printf("No\n");
            }else if(odd==even){
                printf("Yes\n");
            }
           }
    
    return 0;
}