 #include<stdio.h>
int main()
{
    int v,i,x,N[50];
    scanf("%d",&v);
    for(i = 0;i < 50;i++){
        printf("N[%d] = %d\n",i,v);
        v = v+v;
    }
    return 0;
}
 