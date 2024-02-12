#include<iostream> //preprocessor derivative header file
#include<math.h>   //cmath header file for mathematical functions
using namespace std; //using declaration
int main(){   //main function
    int n,i,element,B,E;  //declaring int type variable
    cin>>n;   //taking input
    while(n--){
     cin>>element;
    int B=0,E=n-1;    /*initialate beggining and end = size -1 because array index starts from 0*/
   
    int MID = floor((B+E)/2); /*initialating int type mid value in the floor value of the summation of beg and end by 2*/
   while(B<=E && MID!=element) 
       
   { 
    if(MID>element){  //check if arr[mid] is greater than  array item  


        E = MID-1; //if yes than End = Mid-1
    }else{
        B = MID+1;  //if no Beggining = Mid+1
    }
    MID = floor((B+E)/2); /*initialating int type mid value in the floor value of the summation of beg and end by 2*/
   }
   if(MID>2*element){ //if array 1 mid is equal to arra2 item
   }
   if(B>E){
    cout<<element<<endl;  //print count number
   }
}
 return 0; //return 0 value to the main function
}
