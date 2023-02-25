#include<stdio.h>
int main(){
    printf("odd even checker:\n");
    int n;
    printf("Enter a number: \n");
    scanf("%d",&n);
    check(n);
    return 0;
}
void check(int a){
    if(a%2==0){
        printf("EVEN\n");
    }else{
        printf("ODD\n");
    }
    return 0;
}