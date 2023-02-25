#include<stdio.h>
int main(){
    int x,y;
    char o;
    int t;
    scanf("%d",&t);
    while(t--){
    scanf("%d %c %d",&x,&o,&y);
    switch(o){
        case '+':
        printf("%d\n",x+y);
        break;
        case '-':
        printf("%d\n",x-y);
        break;
        case '*':
        printf("%d\n",x*y);
        break;
        case '/':
        printf("%d\n",x/y);
        break;
    }
    }
    return 0;
}