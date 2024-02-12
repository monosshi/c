#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int m,n;
    cin>>m>>n;

    int a = m*n;
    int ans = floor(a/2);

    cout<<ans<<endl;

    return 0;
}