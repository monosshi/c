#include<bits/stdc++.h> //header file
using namespace std;//using declaration
int main(){   //main function

    int t,n,s; //decraling int type variable
    cin>>t;    //taking input
    while(t--){  //test case
        cin>>n>>s; //taking input of n and the element to search
        int arr[n];

        //loop for array input

        for(int i =0;i<n;i++){ 
            cin>>arr[i]; //taking array input
        }

        sort(arr,arr+n); //sorting the array

        int B=0,E=n-1,MID; //initialte Beg,end and mid

        MID = floor((B+E)/2); /*initialating int type mid value in the floor value of the summation of beg and end by 2*/

        
        while(B<=E && arr[MID]==s){   /*while beg value is less than end and arr of mid is not equal to item which we are searching*/

            if(arr[MID]>s){

                E= MID-1;// end =mid-1

            }else{
                B = MID+1;//beg = mid+1
            }
            MID = floor((B+E)/2); /*initialating int type mid value in the floor value of the summation of beg and end by 2*/

        }

        if(B<E){
            cout<<MID+1<<endl; //printing answer
        }
    }
    return 0; //return 0 value
}