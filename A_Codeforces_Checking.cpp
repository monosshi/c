    #include<iostream>
    using namespace std; 
    int main(){
      int t;
      cin>>t;
      while(t--){
        char alpha;
        cin>>alpha;
        if(alpha=='c'||alpha=='o' ||alpha=='d' ||alpha=='e' ||alpha=='f' ||alpha=='r' ||alpha=='s'){
                cout<<"YES"<<endl;
            }else {
                cout<<"NO"<<endl;
            }
        } 
        return 0;    
    }