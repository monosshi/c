#include<stdio.h>
int main(){
    int choice,num1,num2,choice2,sum,sub;
do{
    printf("what do you want to print?\n1.Addition\n2.Subtraction\n3.YES/NO\n");
    scanf("%d",&choice);

    if(choice==1){
        printf("enter two numbers :\n");
        scanf("%d %d",&num1,&num2);
        sum = num1+num2;
        printf("the sum is %d\n",sum);
    }else if(choice==2){
        printf("enter two numbers :\n");
        scanf("%d %d",&num1,&num2);
        sub = num1-num2;
        printf("the sub is %d\n",sub);
}else{
    printf("Type your choice:\n1.YES\n2.NO\n");
    scanf("%d",&choice2);
}if(choice2==2){
    break;
}

}while(1);
return 0;
}
