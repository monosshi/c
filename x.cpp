/*#include<iostream> //preprocessor derivative header file
using namespace std; //using declaration
int main()  //main function
{
    int n,r,i,j;//declaring int type variable
    cin>>n>>r; //taking input of array size and number of rotation
    int arr[n]; //declaring int type array

    //loop for taking array input

    for(int i = 0;i<n;i++){
        cin>>arr[i]; //taking input
    } 

    for(int i =0;i<r;i++){ //until i is less than rotation
       int first_index =arr[0]; //put arry index 0 int the first_index variable
    for(int i = 0;i<n;i++){
        arr[i] =arr[i+1]; //array[0] index will be shifted by arr[1] index
    }
    arr[n-1]=first_index;  //putting the last index to the first index
    }

    //loop for printing the array
    
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" "; //printing the array
    }
    return 0;//return 0 value 
}
*/
#include<iostream> //preprocessor header file
using namespace std; //using declaration

int main() //main function
{
    int i,j,n,d,x;
    cin>>n; // array of size
    int arr[n];
    cin>>d; //left rotation number
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    for(j=0;j<d;j++)
    {
       x=arr[0]; //storing left most element
       for(i=0;i<n-1;i++)
        arr[i]=arr[i+1];

       arr[i]=x; //right most element equal x

    }
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" "; //printing the output
    }
return 0;
}