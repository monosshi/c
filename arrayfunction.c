#include<stdio.h>
void display();

int main(){
    int num[]={1,2,3,4,5,6,7,8,9,10};
    display(num);

    return 0;
}
void display(int x[]){
    int i;
    for(i=0;i<10;i++){
        printf("%d ",x[i]);
    }
    return 0;
}
