#include<bits/stdc++.h> //Header file

using namespace std;  //using declaration
int main()  //main function

{  
   int size,Q; /*declaring integer type variable size of array, Q for query*/
   cin>>size>>Q; //taking inputs of size and query Q
   int arr[size];  //declaring int type array

   //loop for taking array elements input

   for(int i = 0; i < size ;i++)  //for loop while i is less than size because array index starts from 0
   {
    cin>>arr[i];  //taking array elements input

    sort(arr,arr+size);               //sorting the array
   }
   while(Q--)  //while lopp for testcase how many query to ask
   {

                                      /*BINARY SEARCH FOR FIRST OCCURANCE I HAVE STUDIED AND LEARNT ABOUT IT*/


    int B,E,item,ans=0;//declaring int type B anf E and item which we want to search
    cin>>item;  //taking input of which item to be search for Q times
   

   B=0, E=size-1,ans=0; /*initialate beggining=0 and end = size -1 because array index starts from 0 ans keeping ans variable=0*/
   
   int MID = floor((B+E)/2);  /*initialating int type mid value in the floor value of the summation of beg and end by 2*/

   while(B<=E)                      /*while beg value is less than end */
   { 
    if(arr[MID]==item){           //check if arr[mid] is equal to item  
        ans = MID;
        E = MID-1;                   //if yes than End = Mid-1
    }else if(arr[MID]<item){                 //if arr[mid] is less than  index
            B = MID+1;                             //beg = mid+1
        }else{
            E = MID-1;                             //else end = mid-1
        }

    MID = floor((B+E)/2);                /*initialating int type mid value in the floor value of the summation of beggining and end by 2*/
   }

   if(ans<0){                          //if ans <0 then item not found print -1
    cout<<"-1"<<endl;                 //if yes print the output -1 means position not found
   }else{                                 //if no
    cout<<ans<<endl;               //print ans which is the actual position of the num we are searching
   }
   }
    return 0;                         //return 0 value to the main function
}