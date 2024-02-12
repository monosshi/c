#include<iostream>  //preprocessor derivative header file

using namespace std;  //using declaration

int index_search(int v,int n,int arr[]); //prototyping

int main(){  //main function

    int v; //declaring int type variable v which we want to search in array
    cin>>v;  //inputting v
    int n;  //declaring array size
    cin>>n;  //inputting array size n
    int arr[n]; //declaring array

    // loop for taking array inputs

    for(int i = 0; i<n ;i++){
        cin>>arr[i]; //taking array input
    }
    int answer = index_search(v,n,arr); //calling the function
    cout<<answer; //printing the ans

    return 0; //return 0 value to the main function
}

int index_search(int v,int n,int arr[]) //function of int type with parameters

{ 
    int index; //declaring int type index varaiable
    for(int i = 0; i<n ;i++){   //loop for searching the index from 0 to less than n or array size
        if(arr[i]==v){    //if any index of array is equal to v
          index =i;  //then keep the i into the index variable
        }
}
 return index;   //returing the index value
}