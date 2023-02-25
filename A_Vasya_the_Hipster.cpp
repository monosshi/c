#include<iostream>
using namespace std;
int main(){
    int a,b;
    cin>>a;
    cin>>b;
    if(a<b){
        cout<<a;
        cout<<" ";
        cout<<(b-a)/2 << endl;
    }else if(b<a){
         cout<<b;
        cout<<" ";
        cout<<(a-b)/2 << endl;
    }else if(a==b){
        cout<<a;
        cout<<" ";
        cout<<"0";
    }
    return 0;
}