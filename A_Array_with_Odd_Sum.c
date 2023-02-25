#include<stdio.h>
int main(){
    int t,i;
    int size;
    int sum =0;
    scanf("%d",&t);
    while(t--){
        sum =0;
        scanf("%d",&size);
        int a[size];
        for(int i=0;i<size;i++){
            scanf("%d",&a[i]);
            sum =sum+a[i];
        }
        if(sum%2==0){
            printf("NO\n");
        }else{
            printf("YES\n");
        }
    }
    return 0;
}