#include<stdio.h>
int main(){
    int t,i,sum=0;
    scanf("%d",&t);
    while(t--){
        int size;
        scanf("%d",&size);
      int array[size];
        sum=0;
        for(i=0;i<size;i++){
            scanf("%d",&array[i]);
            sum= sum+array[i];          
        }
          if(sum<0) {
              int sum =-1*sum;
            }  
          printf("%d\n",sum);
      
    }
   
    return 0;
}