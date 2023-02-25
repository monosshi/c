#include<stdio.h>
int main(){
    int t , count;
    scanf("%d",&t);
        int a[t];
        int i;
        count =0;
        for(i=0;i<t;i++){
            scanf("%d",&a[i]);
        
        if(a[i]==1){
            count++;
        }
        }
        if(count==0){
            printf("EASY\n");
        }else{
            printf("HARD\n");
        }   
    return 0;
}
