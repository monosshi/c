#include<stdio.h>
int main(){
    int t,i,have,need;
    scanf("%d",&t);
    for(i=0;i<t;i++){
        scanf("%d %d",&have,&need);
        int monthneed = need*30;
        if(monthneed<=have){
            printf("YES\n");
        }else{
            printf("NO\n");
        }
    }
    return 0;
}