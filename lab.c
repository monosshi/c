#include<stdio.h>
int l,m,o,u;
 int p,q,r,s,t,v,x,y,choice;
int main(){
    while(1){
    int n;
    printf("Enter a number = ");
    scanf("%d",&n);
   
    switch(n){
        case 1:
        printf("Enter two numbers = ");
        scanf("%d %d",&x,&y);
        l =  sum (x,y);
        printf("The sum is %d\n",l);
        break;
        case 2:
        printf("Enter two numbers = ");
        scanf("%d %d",&p,&m);
        m= sub(p,q);
        printf("The mul is %d\n",m);
        break;
        case 3:
        printf("Enter two numbers = ");
        scanf("%d %d",&r,&s);
        o= mul (r,s);
        printf("The mul is %d\n",o);
        break;
        case 4:
        printf("Enter two numbers = ");
        scanf("%d %d",&t,&v);
        u =  div (t,v);
        printf("The div is %d\n",u);
        break;
        default:
        printf("Do you want to continue?\n1.yes\n2.No\n");
        scanf("%d",&choice);        
        }
        if(choice==2){
            break;
        }
        }
    return 0;
}

int sum(int a, int b){
    int c= a+b;
    return c;
}
int sub(int c, int d){
    int e= c-d;
    return e;
}
int mul(int f, int g){
    int h= f*g;
    return h;
}
int div(int i, int j){
    int k= i/j;
    return k;
}

