#include<iostream>  //preprocessor derivative header file
using namespace std;  //using declaration
int main()    //Main function
{
    int n,s=0;  /*declaring integer type variable n for array size and s to count the swap */
    cin>>n;     //taking array size n as input
    int arr[n]; //declaring int type array

    //loop for taking array inputs

    for(int i = 0 ; i < n ; i++)

    {
     cin>>arr[i]; //taking array elements input
    }
    
     s=0; //int type s to count the swap which initial value is 0

     //swapping

    for(int i = 1 ;i < n ; i++){     /*when i=0 and i is less then size i incrementing*/
        for(int j = 0 ;j < n - i ;j++){ /*enter in 2nd loop where j =0,j<n-1 , 1 less then the input size because we start initialiting array from index 0*/
            if(arr[j]> arr[j+1]){   //if arr[j] is greater than arr[j+1]
                swap(arr[j],arr[j+1]); //swap and sort in assending oder
                s++; //incrementing the count of swaps
            }
        }
    }

    //printing outputs

    cout<<"Array is sorted in " << s <<" swaps."<<endl; //print the number of swaps 
    cout<<"First Element: "<<arr[0]<<endl; //print the first element after accending the array
    cout<<"Last Element: "<<arr[n-1]<<endl; //print the last element after accending the array

return 0; //return nothing to the main function
}


