/*#include<stdio.h>
int main(){
    int ar[]={1,2,3,4,5,6};
    int *ptr =&ar[5];
    for(int i=0;i<=5;i++){
        printf("%d ",*(ptr-i));
    }
    return 0;
}*/
#include<stdio.h>
int main(){
    int ar[]={1,2,3,4,5,6};
    int *ptr =&ar[5];
    for(int i=5;i>=0;i--){
        printf("%d ",ar[i]);
    }
    return 0;
}