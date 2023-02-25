#include<stdio.h>
int main(){
    float x;
    printf("Enter your marks: ");
    scanf("%f",&x);
    if(x<=100 && x>=80){
        printf("A+");
    }else if(x<80 && x>=70){
        printf("A");
    }else if(x<70 && x>=60){
        printf("A-");
    }else if(x<60 && x>=50){
        printf("B");
    }else if(x<50 && x>=40){
        printf("C");
    }else if(x<40){
        printf("F");
    }
    return 0;
}
