#include<iostream>
using namespace std;
int even,odd;
int main()
{
    int t,i;
    cin>>t;
    
    while(t--){
        int size;
        cin>>size;
        int a[size];
        for(int i = 0; i<size ;i++){
            cin>>a[i];
        }
         even = 0,odd = 0;
        for(int i = 0;i<size;i++){
           
            if(a[i]%2==0)
            {
                even++;
            }
            else{
                odd++;
            }
           
        }
         if(even == 0){
                cout<<odd;
            }else{
                cout<<even;
            }
    }
    return 0;
}
