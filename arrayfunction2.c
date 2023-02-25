#include<stdio.h>
void display(int x[]);
int sum =0;
int main(){
    int i;
    int num[]={1,2,3,4,5};
    display(num);
    getc;
}
void display(int x[]){
    int i;
    for(i=0;i<5;i++){
        printf("%d ",x[i]);
       sum =sum +x[i];
    }
    printf("\n");
    printf("The sum is %d",sum);
    }
