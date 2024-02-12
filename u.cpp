#include<iostream> //preprocessor derivative header file
using namespace std;//using declaration
int main() //main function
{
    int t,i,j,c;           //declaring variables
    cin>>t;                //taking input testcase
    for(int i =0;i<t;i++){    //testcase
    int n;                    //variable n for input
    cout<<"N = ";               //output N
    cin>>n;                 //taking input n

    int arr[n][n],transpose[n][n];    //declaring one array and one transpose array opposite to it by swapping the row and coloums
    for(int i = 0;i<n;i++){        //loop for row
        for(int j = 0;j<n;j++){    //loop for coloum
            cin>>arr[i][j];        //taking 2D array input
          transpose[j][i]=arr[i][j];   //kepping array row value to transpose coloum and coloum value to row
        }
    }



/* sir i couldn't undrestood the question logic how to check all elements of it are non-negative and symmetric
with relation to the center of this matrix.*/








    c=0;  //count variable
    for(int i = 0;i<n;i++){ // loop for row
    for(int j = 0;j<n;j++){ //loop for coloum
    if (arr[i][j] == transpose[i][j]){ //if array and transposed array is not equal
               c++; //incrementing count
               break;
     }
    }
   }  


    if(c==0){          //if count =0 then array and transposed array is equal so it is symmetric
    
    cout<<"TEST #"<<i+1<<":"<<" Symmetric."<<endl; //print ans symmetric
            }else{      //if count !=0 then array and transposed array is not equal so it is non_symmetric
                 cout<<"TEST #"<<i+1<<":"<<" Non-symmetric."<<endl;; //print ans non_symmetric
            }
    }
return 0; //return 0 value to the main function
}

