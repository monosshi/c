#include<stdio.h>
int main(){
    int k,n,w,i,p,q,sum=0;
    scanf("%d %d %d",&k,&n,&w);
     p= k;
     q= p*w;
    for( i=p;i<=q;i++){
        if(i%p==0){
        sum=sum+i;
    }
    }
     if(sum<=n){
        printf("0\n");
    }else if(sum>n){
        printf("%d\n",sum-n);
    
}
return 0;
}
