#include<iostream> //preprocessor derivative header file
using namespace std; //using declaration

int main()      //main function
{
    int t,arr[2];  //declaring int type variables
    cin>>t;       //taking input of test case
    for(int i =0;i<t;i++){     //loop for test case
        int n;      //declaring int type variable n the number of records
        cin>>n;     //taking input of n
        while(n--){  //for n
            int arr[2]; //initializing array[n] 

            //loop for taking array input

            for(int i =0;i<2;i++){
                cin>>arr[i]; //taking array input
            }
        }
        for(int i = 0 ;i < n ; i++){     /*when i=0 and i is less then size i incrementing*/
        for(int j = 0 ;j < n - 1 ;j++){ /*enter in 2nd loop where j =0,j<n-1 , 1 less then the input size because we start initialiting array from index 0*/
            if(arr[j]> arr[j+1]){   //if arr[j] is greater than arr[j+1]
                swap(arr[j],arr[j+1]); //swap and sort in assending oder
            }
        }
    }


              cout<<"Case #"<<i+1<<":" <<endl;             //couldn,t print the output


              /*SIR I COULDN'T UNDERSTOOD THE LOGIC OF GETTING MAXICAL SPEED SO I COULDN'T COMPLETE MY CODE
              
              
                                                             IT'S AN INCOMPLETE CODE*/




    }



    return 0;  //return 0 value to the main function

}