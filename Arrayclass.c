#include<stdio.h>
int main(){
    int b,size;
    printf("Enter size of array = ");
    scanf("%d",&size);
    int a[size];
    printf("Enter array elements = ");
    for(int n =0;n<size;n++){
        scanf("%d",&a[n]);
    }
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(a[i]>a[j]){
                b=a[i];
                a[i]=a[j];
                a[j]=b;
            }
        }
    }
    for(int i=0;i<size;i++){
        printf("%d ",a[i]);
    }
    printf("\n");
    for(int i=size-1;i>=0;i--){
        printf("%d ",a[i]);
    }
    return 0;
}