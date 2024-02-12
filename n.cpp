#include<iostream> //preprocessor derivative header file
#include<math.h>   //cmath header file for mathematical function
using namespace std; //Using declaration
int main(){    //main function

    int n,k; //int type variable
    cin>>n>>k;  //taking input
    int deadline_time = 240; //its 20:00 so left time deadline is 4 hours= 240 min
    int remaining_time =(deadline_time - k);      //remaning time 

    int arr[n];           //declaring array size
    arr[0] = 5;           //initializing 5 to the first index of array because it takes 5 min to slove the first problem

    for(int i =1;i<n;i++){   //The loop starts from 1 first ondex because at 0 index it's value is fixed which is 5 time to solve the first problem always

        for(int k =2;k<n;k++){  //starting k from 2 because its starting from the second question first question is already fixed

        arr[i] = (k*5)+arr[i-1];  /*keeping in arr[i] variable the times for 2nd ...3rd or more question which is 5 times of 
                                     question and summation with the previous question time*/

        }

    }
    //Binary search
    
    int B=0,E=n-1,MID; //initialte Beg,end and mid

    MID = floor((B+E)/2); /*initialating int type mid value in the floor value of the summation of beg and end by 2*/

    while(B<=E && arr[MID]!=remaining_time){ /*while beg value is less than end and arr of mid is not equal to item which we are searching*/

        if(arr[MID]<remaining_time){     //while arr[mid] is less than remaining time
            B=MID+1; //beg = mid+1
        }else{
            E=MID-1; //beg = mid-1
        }
        MID = floor((B+E)/2); /*initialating int type mid value in the floor value of the summation of beg and end by 2*/
    }

    //printing answer

    if(arr[MID]==remaining_time){  //if arr[mid] == remaining time
        cout<<MID+1<<endl; //print mid+1
    }else if(B>E){ //if not
        cout<<B<<endl; //print beggining
    }
    return 0; //return 0 value 
}