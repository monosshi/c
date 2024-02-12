#include<iostream> //preprocessor derivative header file
using namespace std;//using declaration
int main() //main function

{
    int n1,n2,j,count,count2,element; //declaring int type variable n1 and n2 as both array size
    cin>>n1>>n2; //taking input
    int arr1[n1];  //initializing array1
    int arr2[n2];  //initializing array2

    //loop for taking input

    for(int i =0;i<n1 ;i++){ 
        cin>>arr1[i]; //taking array elements input
    }
    //loop for taking input

       for(int i =0;i<n2 ;i++){
        cin>>arr2[i];  //taking array elements input
       }
       count = 0;
       for(int i =0;i<n1;i++){
         for(int j=0;j<n1;j++){
            if(arr1[i]==arr1[j]){
                count++;
            }

            int fre[count+1] = {0};
            for(int i =0;i<n1;i++){
                fre[arr1[i]]++;
            }

           for(int i =0;i<n1;i++){
            if(fre[i]!=0){
                cout<<i<<" "<<fre[i]<<endl;
            }
           }
       }
       }
       return 0;
}

//there was some problem while priting the answer
/*#include<iostream>
using namespace std;

void input_arr(int n, int arr[]);
void freq(int n, int arr[]);

int main(){
    int n;
    cin>>n;
    int arr[n];

    input_arr(n,arr);
    freq(n,arr);

    return 0;
}
void input_arr(int n, int arr[]){
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
}


void freq(int n ,int arr[]){

    for(int i=0;i<n;i++){
        int count = 0;
        for(int j=0;j<n;j++){
            if(arr[i]==arr[j]){
                count++;
            }
        }cout<<"The element "<<arr[i]<<" is repeated "<<count<<" times in array."<<endl;
    }
}

*/