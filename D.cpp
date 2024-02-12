#include<iostream>      //user deruivative header file
using namespace std; //using declaration
int main(){     //main function

    int n,count;        //declaring variables
    cin>>n;            //taking input nwhich is array size
    int arr[n];        //inilialize array size

    //loop for taking array input




                                              /*SIR I COULDN,T UNDERSTOOD THE LOGIC OF THIS PROBLEM*/

    for(int i = 0;i <n ;i++){
        cin>>arr[i];    //taking array elements input                                 
    }
    count =0;      //count variable to count the swaps

  //bubble sort

  for(int i =0 ;i<n;i++){   /*when i=0 and i is less then size i incrementing*/
    for (int j =0;j<n-1;j++)   /*enter in 2nd loop where j =0,j<n-1 , 1 less then the input size because we start initialiting array from index 0*/
    {
        if(arr[j]>arr[j+1]){     //if arr[j] is greater than arr[j+1]
            swap(arr[j],arr[j+1]);  //swap and sort in assending oder
            count++; //incrementing the count of swaps
        }
    }
    
  }

  cout<<count-1<<endl;  //printing the answer

    return 0;    //return 0 value to the main function
}