#include<stdio.h>
int main(){
    int a,b,c,d;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    int s=a*60+b;
    int e=c*60+d;
    int dur=e-s;
    if(dur<=0){
        int dur=dur+24*60;
        int hour=dur/60;
        int min=dur%60;
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)",hour,min);
    }
    return 0;
}