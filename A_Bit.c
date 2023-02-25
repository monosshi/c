#include<stdio.h>
int main(){
    int t,i,bit=0;
    scanf("%d",&t);
    for(i=0;i<t;i++){
        char name[5];
        scanf("%s",&name);
        if(name[1]== '+'){
            bit++;
        }else if (name[1]== '-'){
            bit--;
        }   
    }
    printf("%d\n",bit);
    return 0;
}
