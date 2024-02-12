#include<bits/stdc++.h>
using namespace std;

int main(){
    int n=1,t;
    cin>>t;
while(t--)
   {
    cin>>item;  
   
   int MID = floor((B+E)/2); 

   B=0, E=size-1; 

   while(B<=E && arr[MID]!=item) 
   { 
    if(arr[MID]>item){ 

        E = MID-1;
    }else{
        B = MID+1; 
    }

    MID = floor((B+E)/2); 
   }

   if(B>E){  
    cout<<"-1"<<endl;  
   }else{  
    cout<<MID<<endl; 
   }
    
   }
    return 0;
}
