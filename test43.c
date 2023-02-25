#include<stdio.h>
int main(){
    int x;
    printf("Which code do you want to run?\n");
    printf("Enter 1 for if condition or 2 for switch statement\n");
    scanf("%d",&x);
    if(x==1){
         float x;
    printf("you choosed if condition\n");
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
    }else if(x==2){
         int x;
    printf("you choosed switch statement\n");
    printf("Enter your marks: ");
    scanf("%d",&x);
    int y=x/10;
    switch(y){
        case 10:
        printf("A+");
        break;
        case 9:
        printf("A+");
        break;
        case 8:
        printf("A+");
        break;
        case 7:
        printf("A");
        break;
        case 6:
        printf("A-");
        break;
        case 5:
        printf("B");
        break;
        case 4:
        printf("C");
        break;  
        default:
        printf("F");
    }       
    }else{
        printf("Sorry you entered invalid code");
    }
    return 0;
}
