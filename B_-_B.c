#include<stdio.h>
int main(){
    int t,i,size;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&size);
      int num[size];
        for(int i=0;i<size;i++){
        scanf("%d",&num[i]);
        }
     int max=num[0];
     int min=num[0];
     for(i=1;i<size;i++){
            if(max<num[i]){
                max=num[i];                 
            }
           
     }
      for(i=1;i<size;i++){
            if(min>num[i]){
                min=num[i];                 
            }
              
      }
       printf("%d\n",max-min);      
}
    

 return 0;
}
