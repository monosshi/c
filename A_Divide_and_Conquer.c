#include<stdio.h>
int main(){
    int t,size;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&size);
        int a[size];
        for(int i=0;i<size;i++){
        scanf("%d",&a[i]);
        }
        int p =a[size-1];
        int q = p/size;
        if(q<=9){
        printf("%d\n",q);
        }else{
            printf("%d",((q%10)-1));
        }
        }
    
    return 0;
}