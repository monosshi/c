/*#include<iostream> //preprocesor derivative header file
using namespace std; //using declaration

void array_duplicate(int n ,int arr[]){  //void function
    int i,j; //declaring int type variable i and j
    int count = 0; //declaring  integer type count variable with initial value 0
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
         if(arr[i]==arr[j]){ //checking the elements is duplicate or not
          count=count+1;  //if yes increment the count by 1
          break; 
         }
    }
    }
   cout<<"Duplicate elements = "<<count<<endl; //printing the duptilate number
   return; //return nothing to void function
}

int main(){  //main function
    int n; //declaring int type variable n
    cin>>n; //taking input
    int arr[n]; //declaring int arr[n]
    cout<<"Enter array : ";
    //loop for taking input of array elements
    for(int i=0;i<n;i++){
        cin>>arr[i]; //taking input
    }
    array_duplicate(n,arr); //calling the function
    return 0; //return nothing to the main function
}
*/

#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    char arr[n];
    for(int i =0 ;i<n ;i++){
        cin>>arr[i];
    }
    int count = 0;

    for(int i =0 ;i<n ;i ++){
    
        
            if(arr[i]==arr[i+1]){
                count = count +1;
            }
            
    
    }
     cout<<count<<endl;
    return 0;
}