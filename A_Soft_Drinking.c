#include<stdio.h>
int main(){
    int n,k,l,c,d,p,nl,np;
    scanf("%d %d %d %d %d %d %d %d",&n,&k,&l,&c,&d,&p,&nl,&np);
    int mo = k*l;
    int no = mo/nl;
    int ss =c*d;
    int hi = p/np;
    if(no>=ss && ss<=hi){
        printf("%d\n",ss/n);
    }else if(ss>=no && no<=hi){
        printf("%d\n",no/n);
    }else if(no>=hi && hi<=ss){
        printf("%d\n",hi/n);
    }

    return 0;
}