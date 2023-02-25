#include<stdio.h>
int main(){
    int a,b,c;
        scanf("%d %d %d",&a,&b,&c);
        if(a>b && a<c && b<c || a<b && a>c && b>c){
            int mo =((b-a)-(c-a));
            if(mo<0){
            printf("%d\n",mo*-1);}
            else{
                 printf("%d\n",mo);

            }
        }else if(b>a && b<c && a<c || b<a && b>c && a>c){
             int no =((a-b)+(b-c));
             if(no<0){
            printf("%d\n",no*-1);}
            else{
                 printf("%d\n",no);

            }
            
        }else if(c>a && c<b && a<b || c<a && c>b && a>b){
             int ss =((a-c)-(b-c));
            if(ss<0){
            printf("%d\n",ss*-1);}
            else{
                 printf("%d\n",ss);

            }
        }
    
    return 0;
}
