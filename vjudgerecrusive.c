#include<stdio.h>
fact();
int main(){
    int a;
    scanf("%d",&a);
   int result= fact(a);
   
    printf("%d\n",result);
    return 0;
}
int fact(int x){
    if(x==0){
        return 1;
        }
    else{
        return x*fact(x-1);
    }
}
