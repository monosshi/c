    #include<stdio.h>
    int main()
    {
        int t,count=0;
        scanf("%d",&t);
        while(t--)
        {
            int a,b,c;
            scanf("%d %d %d",&a,&b,&c);
            if(a==1 && b==1 && c==1||a==1 && b==1 && c==0||a==1 && b==0 && c==1||a==0 && b==1 && c==1)
            {
                count++;
            }
        }
        printf("%d\n",count);
        return 0;
    }

