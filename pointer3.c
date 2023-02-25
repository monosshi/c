#include<stdio.h>
int main(){
    struct person{
        int age;
        char name[20];
        int weight;
    };
    struct person a;
    a.age=35;
    a.weight=50;
    strcpy(a.name,"jamaner");
    struct person *ptr =&a;
    printf("%s\n",ptr->name);
    printf("%d\n",ptr->age);
    printf("%d\n",ptr->weight);
}



