#include<iostream>
using namespace std;
int main(){
    int t,x,y;
    cin>>t;
    while(t--){
        cin>>x;
        cin>>y;
        if(x%y==0){
            cout<<"0"<<endl;
        }else{
            int p =y-(x%y);
            cout<<p<<endl;
        }       
    }
    return 0;
}