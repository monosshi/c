#include<stdio.h>
int main(){
    int a,b,c,d,e,totalmoney,totalmoney2;
    int o,f,s,m,n,totalmeal,moneybackget;
    float mealrate;
    printf("Enter 5 persons total money\n");
    scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
    totalmoney=a+b+c+d+e;
    printf("Enter 5 persons total meal number\n");
    scanf("%d %d %d %d %d",&o,&f,&s,&m,&n);
    totalmeal=o+f+s+m+n;
    mealrate=(totalmoney/totalmeal);
    printf("Meal rate = %.2f\n",mealrate);
    totalmoney2= mealrate*o;
    moneybackget= (a-totalmoney2);
    printf("person 1 total cost money = %d tk\n",totalmoney2);
    if(moneybackget>0){
        printf("person 1 will get money back = %d tk\n",moneybackget);
    }else if(moneybackget<0){
        printf("person 1 will give money  = %d tk\n",moneybackget*-1);
    }totalmoney2= mealrate*f;
    moneybackget= (b-totalmoney2);
    printf("person 2 total cost money = %d tk\n",totalmoney2);
    if(moneybackget>0){
        printf("person 2 will get money back = %d tk\n",moneybackget);
    }else if(moneybackget<0){
        printf("person 2 will give money  = %d tk\n",moneybackget*-1);
    }totalmoney2= mealrate*s;
    moneybackget= (c-totalmoney2);
    printf("person 3 total cost money = %d tk\n",totalmoney2);
    if(moneybackget>0){
        printf("person 3 will get money back = %d tk\n",moneybackget);
    }else if(moneybackget<0){
        printf("person 3 will give money  = %d tk\n",moneybackget*-1);
    }totalmoney2= mealrate*m;
    moneybackget= (d-totalmoney2);
    printf("person 4 total cost money = %d tk\n",totalmoney2);
    if(moneybackget>0){
        printf("person 4 will get money back = %d tk\n",moneybackget);
    }else if(moneybackget<0){
        printf("person 4 will give money  = %d tk\n",moneybackget*-1);
    }totalmoney2= mealrate*n;
    moneybackget= (e-totalmoney2);
    printf("person 5 total cost money = %d tk\n",totalmoney2);
    if(moneybackget>0){
        printf("person 5 will get money back = %d tk\n",moneybackget);
    }else if(moneybackget<0){
        printf("person 5 will give money  = %d tk\n",moneybackget*-1);
    } 
    return 0;
}
