#include<iostream>
using namespace std;
int main(){
    int t;
    int a,b,c;
    cin>>t;
    while(t--){
        cin>>a;
        cin>>b;
        cin>>c;
        if(a>b && a>c){
            cout<<"0";
            cout<<" ";
            cout<<(a-b)+1;
            cout<<" ";
            cout<<(a-c)+1<<endl;
        }else if(b>a && b>c){
            cout<<(b-a)+1;
            cout<<" ";
            cout<<"0";
            cout<<" ";
            cout<<(b-c)+1<<endl;
        }else if(c>a && c>b){
            cout<<(c-a)+1;
            cout<<" ";
            cout<<(c-b)+1;
            cout<<" ";
            cout<<"0"<<endl;
        }else if(a==b &&b==c && c==a){
            cout<<(a-b)+1;
            cout<<" ";
            cout<<(b-c)+1;
            cout<<" ";
            cout<<(c-a)+1<<endl;
        }
    }
    return 0;
}