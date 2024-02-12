#include<iostream>//preprocesor derivative header file
using namespace std;//using declaration
int main(){  //main function
    int n;
    cin>>n; //taking n input
    int arr[n];
    cout<<"Enter array : ";
    //loop for taking input
    for(int i=0;i<n;i++){
        cin>>arr[i]; //taking input of array elements
    }
     for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                int temp= arr[i];
                arr[i]=arr[j]; //sorting by swaping
                arr[j]=temp;
            }
        }
    }
    cout<<"second minimum element of array is = "<<arr[1]<<endl;
    cout<<"second maximum element of array is = "<<arr[n-2]<<endl; 
    return 0;
}
