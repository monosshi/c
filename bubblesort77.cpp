#include<iostream>  //preprocessor derivative header file
using namespace std;  //using declaration
void gravity(int n , int arr[]); //prototyping
int main()    //Main function
{
    int n;  //declaring integer type variable n which is coloum and taken as array size
    cin>>n;     //taking array n coloum input which is array size
    int arr[n]; //declaring int type array

    //loop for taking array inputs

    for(int i = 0 ; i < n ; i++)

    {
     cin>>arr[i]; //taking array elements input
    }
     gravity(n,arr); //calling the function

return 0; /*return 0 means return nothing to thae main finction*/

}

void gravity(int n , int arr[]){    //void type function with parameters
    
    for(int i = 0 ;i < n ; i++){     /*when i=0 and i is less then size i incrementing*/
        for(int j = 0 ;j < n - 1 ;j++){ /*enter in 2nd loop where j =0,j<n-1 , 1 less then the input size because we start initialiting array from index 0*/
            if(arr[j]> arr[j+1]){   //if arr[j] is greater than arr[j+1]
                swap(arr[j],arr[j+1]); //swap and sort in assending oder
            }
        }
    }

    //loop for print the array 

    for(int i = 0; i < n ; i++){ /*when i=0 and i is less then size i incrementing*/

        cout<<arr[i]<<" ";  //print the output array after accending it

    }

}