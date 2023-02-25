#include<stdio.h>
int main(){
    int t;
    int hour,min;
    int fullday= 1440;
    scanf("%d",&t);
    while(t--){
        scanf("%d %d",&hour,&min);
        int minleft = (fullday-((hour*60)+min));
        printf("%d\n",minleft);
    }
    return 0;
}