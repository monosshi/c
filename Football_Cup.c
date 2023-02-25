#include<stdio.h>
int main(){
    int t,i,team1,team2;
    scanf("%d",&t);
    for(i=0;i<t;i++){
        scanf("%d %d",&team1,&team2);
        if(team1==0 && team2==0){
            printf("NO\n");
          }else  if(team1==team2){
            printf("YES\n");
        }else if(team1!=team2){
            printf("NO\n");
        }
    }
    return 0;
}
