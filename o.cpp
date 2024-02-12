#include<bits/stdc++.h>  //header file

using namespace std; //using declaration

int main()   //main function
{
    int n,q,x,y,j,a=0; //declaring int type variables


    //for loop because test case cannot be checked more then 65 times it should be less than 65


    for(int j =1;j<65;j++){ 
        cin>>n>>q;               //taking input of array size
        int arr[n],arr2[q];       //daclaring array
        
        if(n==0 && q==0){             //if n and q is equal to 0 then break
            break;                    //break the loop and taking inputs
        }
            
            for(int i =0;i<n;i++){
            cin>>arr[i];                 //loop for taking array input
            }

        sort(arr,arr+n);         //sorting the array


    
        
        for(int i=0;i<q;i++){
            cin>>arr2[i];           //loop for taking array input of query or item to be searched
        }

     cout<<"CASE# "<<j<<":"<<endl;   //printing the test case for every input
         
     for(int i=0;i<q;i++){     //loop forwhich binary search will continue it will be upto q 


    // Binary search for dirst occurence i have learned the process


    int a =0,B=0,E=n-1,MID;     //initializing beginning end and mid and a variable 

    MID = floor((B+E)/2);          /*initialating int type mid value in the floor value of the summation of beg and end by 2*/

    while(B<=E){                                      //while beg is smaller or equal to end
        if(arr[MID]==arr2[i]){                       //check if array[mid]==array2[i], i-index
            a = MID+1;                             //keep mid+1 into a
            E =MID-1;                                 //and end = mid-1
        }else if(arr[MID]<arr2[i]){                 //if arr[mid] is less than arr2 index
            B = MID+1;                             //beg = mid+1
        }else{
            E = MID-1;                             //else end = mid-1
        }

        MID = floor((B+E)/2);     /*initialating int type mid value in the floor value of the summation of beg and end by 2*/
    }
    

    if(a==0){                             //if a==0 then the item is not found
    cout<<arr2[i]<<" not found"<<endl;      //print the ans not found
   }else{                                  //if ans is not 0 then the item is found

    cout<<arr2[i]<<" found at "<<a<<endl;      //print the ans item found with positions

   }
    }
   }

    return 0;  //return nothing to the main function
}

