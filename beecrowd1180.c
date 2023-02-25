#include<stdio.h>
int main(){
    int num[1000],n,i,pos;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&num[i]);
    }
    int min =num[0];
    for(i=1;i<n;i++){
        if(min>num[i])
        min=num[i];
    }printf("Menor valor: %d\n",min);
    int value =min;
     for(i=0;i<n;i++){
        if(num[i]==value){
            pos=i;
            break;
        }
     } printf("Posicao: %d\n",pos);

    return 0;
}
