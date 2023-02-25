    #include <stdio.h>
    void showElement(int ar[],int i,int n)
    {
        if(i==n)
        {
            return;
        }else{
        printf("%d ",ar[i]);
        return showElement(ar,i+1,n);
        }
    }
    int main()
    {
        int n;
        scanf("%d",&n);
        int ar[n];
        for(int i=0; i<n; ++i) scanf("%d",&ar[i]);
    
        showElement(ar,0,n);
    }
    