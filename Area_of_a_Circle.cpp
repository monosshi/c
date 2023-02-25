/*#include<iostream>
using namespace std;
int main(){
int x,y;
cin>>x;
cin>>y;
cout<<"X = "<<x+y <<endl;
return 0;
}*/
#include<iostream>
#include <iomanip>
using namespace std;
int main(){
    float x;
    cin>>x;
    cout<<"A=" << fixed<< setprecision (4) <<3.14159*x*x <<endl;
    return 0;
}