#include<stdio.h>
#include<string.h>
int main(){
    char a[10],temp;
    scanf("%s",&a);
    for(int i=0;i<strlen(a);i++){
        for(int j=i+1;j<strlen(a);j++){
            if(a[i]<a[j]){
                temp =a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("%s",a);
}
