#include<stdio.h>
int main(){
    int num=1000;
   while(num){
    for(int i=1;i<=4;i++){
        printf("%d\t",num);
        num--;
    }
    printf("\n");
   }

    return 0;
}
