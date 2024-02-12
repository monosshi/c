#include<bits/stdc++.h> //header file

using namespace std; //using declaration
  
int main(){   //main function
    int l,s,search;  //declaring int type variable
    cin>>l>>s;   //inputting
    int arr[l]; //declaring array

    // loop for taking array input

    for(int i =0;i<l;i++){
        cin>>arr[i];  //taking input
    }

    //sort for sorting the array

    sort(arr,arr+l);

   
    //test case
    while(s--){
        cin>>search; //inputing the element which we want to search

        //binary search
    
    int B=0,E=l-1;   /*initialate beggining and end = size -1 because array index starts from 0*/
   
    int MID = floor((B+E)/2); /*initialating int type mid value in the floor value of the summation of beg and end by 2*/

    while(B<=E && arr[MID]!=search) /*while beg value is less than end and arr of mid is not equal to item which we are searching*/
   
   { 
    if(arr[MID]>search){  //check if arr[mid] is greater than item  


        E = MID-1; //if yes than End = Mid-1
    }else{     //if no
        B = MID+1; // than beg = Mid+1
    }

    MID = floor((B+E)/2);  /*initialating int type mid value in the floor value of the summation of beg and end by 2*/
    
   } 
    if(B>E){   //check if Beggining is greater then End which is not possible
    cout<<l-B<<endl; //if yes print the output l-beggining which means greater number then the beggining
   }else{   //if the number is found
    cout<<l-MID<<endl;  //print l-mid which means included that number and grater than that number
   }
    }
  
    return 0; //return nothing
}