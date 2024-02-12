#include<iostream> //preprocessor derivative header file
using namespace std;  //using declaration
int main()       //main function
{
    int t,s;     //declaring variables
    cin>>t;      //taking input of testcase
    for(int i =0;i<t;i++){    //loop until the testcase finish
        int n;         //take array size variable
        cin>>n;         //taking input
        int arr[n];     //intializing array

        for(int i =0;i<n;i++){    //loop for taking array input
            cin>>arr[i];   //taking array input
        }

         s=0; //int type s to count the swap which initial value is 0



                                                 /*SIR I COULDN'T UNDERSTOOD THE GIVEN BUBBLE SORT ALGORITHM*/

     //swapping

    for(int i = 0 ;i < n ; i++){     /*when i=0 and i is less then size i incrementing*/
        for(int j = 0 ;j < n - 1 ;j++){ /*enter in 2nd loop where j =0,j<n-1 , 1 less then the input size because we start initialiting array from index 0*/
            if(arr[j]> arr[j+1]){   //if arr[j] is greater than arr[j+1]
                swap(arr[j],arr[j+1]); //swap and sort in assending oder
                s++; //incrementing the count of swaps
            }
        }
    }
    cout<<"Case "<<i+1<<": "<<s<<endl;   //printing ans
    }
    return 0; //return 0 value to main function

}