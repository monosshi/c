#include<stdio.h>
int sum(int arr[],int i,int n);
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int sumofarray=sum(arr,0,n);
    printf("The sum of array elements %d",sumofarray);
    return 0;
}
int sum(int arr[],int i,int n){
    if(i>=n){
        return 0;
    }else{
        return (arr[i]+sum(arr,i+1,n));
    }
}
