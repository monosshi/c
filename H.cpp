#include<bits/stdc++.h> //HEADER FILE
using namespace std;   //using namespace std
int findswaps(int n ,int a[]);  //prototyping
int main(){      //main function

    int n,x;     //declaring variable
 
    cin>>n;      //taking input
    int a1[1];     //initialize aaray
    for(int i=0;i<n;i++){

        cin>>x;  //taking input
        a1[0]=x; //keeping x value in array 0 index
    }
   int p =  findswaps(n,a1);  //calling the function

   cout<<p/a1[0]; //printing output
    

    return 0;     //return 0 value to the main function
}

//from question

int findswaps(int n ,int a[])    //int type function with parameter
{
 int count =0,i,j,temp,b[100000];  //declaring variables
 

 for(int i =0;i<n;i++){ //for loop
    b[i]=a[i];  //keeping a[i] to b[i]
 }

 //loop for swap

 for(int i =0;i<n;i++){        //loop for a index 
    for(int j =0;j<n-1;j++){  //loop for b index
        if(b[j]>b[j+1]){      //if b[j]>b[j+1]
            temp = b[j];
            b[j] = b[j+1];    //swapping the values
            b[j+1]=temp;

            count++;   //count increment
        }
    }
 }
 return count;    //return count
}


                               /*SIR  I COULDN'T UNDERSTOOD THE LOGIC OF THE PROBLEM AND COULDN'T PRINT THR ANSWER*/