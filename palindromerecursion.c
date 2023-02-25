#include<stdio.h>
int main(){
    int num,p;
    printf("Enter a number = ");
    scanf("%d",&num);
    p=rev(num);
    if(p==num){
        printf("Palimdrome");
    }else{
        printf("Not palindrome");
    }
    return 0;
}
int rev(int n){
    static int t =0;
    if(n==0){
        return t;
    }else{
        t=(t*10)+(n%10);
        return rev(n/10);
    }
}
