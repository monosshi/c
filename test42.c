#include<stdio.h>
int main(){
    int x,y,z;
    scanf("%d %d %d",&x,&y,&z);
    if(x>y){                            //NESTED IF CONDITION
        if(y==z){
            printf("y and z are equal");
        }else{
            printf("y and z are not equal");           
        }
    }else{
        printf("cant go through the 2nd condition");
    }
    return 0;
}
