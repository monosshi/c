#include<stdio.h>
void Toh(int,char,char,char);
int main(){
    int n;
    printf("Enter the number od disks : ");
    scanf("%d",&n);
    printf("\n");
    Toh(n,'A','B','C');
    return 0;
}
void Toh(int n,char beg,char aux,char end){
    if(n>=1){
        Toh(n-1,beg,end,aux);
        printf(" move disk %d from %c to %c\n",n,beg,end);
        Toh(n-1,aux,beg,end);
    }
}


