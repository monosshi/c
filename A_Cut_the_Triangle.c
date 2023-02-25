#include<stdio.h>
int main(){
    int t,a,b,c,d,e,f;
    scanf("%d",&t);
    while(t--){
        scanf("%d %d",&a,&b);
        scanf("%d %d",&c,&d);
        scanf("%d %d",&e,&f);
       
        if(a!=c && a!=e && c!=e || b!=c && b!=f && d!=f){
            printf("YES\n");
        }else{
            printf("NO\n");
        }
    }
    return 0;
}