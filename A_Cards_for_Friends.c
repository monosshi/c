#include<stdio.h>
int main(){
    int t,x,y,z;
    scanf("%d",&t);
    while(t--){
        scanf("%d %d %d",&x,&y,&z);
        if(x%2==0 && y%2==0){
            int p = 4;
            if(p>z){
                printf("YES\n");
            }else{
                printf("NO\n");
            }
        }else if(x%2==0 && y%2!=0){
            int q = 3;
            if(q>z){
                printf("YES\n");
            }else{
                printf("NO\n");
            }
        }else if(x%2!=0 && y%2==0){
            int r = 3;
            if(r>z){
                printf("YES\n");
            }else{
                printf("NO\n");
            }
        }else if(x%2!=0 && y%2!=0){
            int s = 2;
            if(s>z){
                printf("YES\n");
            }else{
                printf("NO\n");
            }
        }
    }
    return 0;
}