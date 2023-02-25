#include<stdio.h>
int main(){
    int x,y;
    scanf("%d %d",&x,&y);
    switch(x){
        case 1:
        printf("yes");
        break;
        case 2:
        printf("Not yes");
        break;
        case 3:
        printf("Not not yes");
        switch(y){
            case 5:
            printf("not not not yes");
            break;
        } default:
        printf("yes or no");
        return 0;
}
    }
