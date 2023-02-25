#include<stdio.h>
int main(){
    int x;
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
    return 0;
}
