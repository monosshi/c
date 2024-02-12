#include<iostream>   //PREPROCESSOR DERIVATIVE HEADER FILE
using namespace std; //USING DECLARATION

int main(){            //MAIN FUNCTION


    int t,n,c,c1,i,j,k;     //DECLARING VARIABLES
    cin>>t;                 //INPUTTING TESTCASE
    while(t--){             //FOR TESCASE
        cin>>n;             //TAKE INPUT ARRAY SIZE N
        int arr[n];         //INITIALIZE THE ARRAY
        for(int i = 0; i<n;i++){              //FOR LOOP FOR TAKING ARRAY ELEMENTS INPUT
            cin>>arr[i];              //TAKING ARRAY INPUT
        }

        for(int i = 0; i<n;i++){      //LOOP FOR  VALUE OF ARRAY
            for(int j = i-1;i>=0;j--){   //LOOP FOR CHECKING LEFT SIDE VALUE ODF ARRAY

          c= arr[j]+arr[j+1];        //COULDN,T UNDERSTOOD THE LOGIC HOW TO ADD VALUES
          
    }
        }

         for(int i = 0; i<n;i++){      //LOOP FOR  VALUE OF ARRAY
            for(int k = i+1;k<n;k++){ //LOOP FOR CHECKING LEFT SIDE VALUE ODF ARRAY

          c1= arr[k]+arr[k+1];         //COULDN,T UNDERSTOOD THE LOGIC HOW TO ADD VALUES
        
    }
        }

        //PRINT ANSWER

     if(c==c1){
            cout<<"Yes"<<endl; //PRINT YES
        }else{
            cout<<"NO"<<endl;    //PRINT NO
        }
    }
    return 0;       //RETURN 0 VALUE TO THE MAIN FUNCTION
}

                                  /*I UNDERSTOOD THE QUESTION BUT COULDN'T IMPLEMENT IT INTO A CODE AND COULDN'T BUILD LOGIC FOR ADDING
                                  ARRAY INDEX FOR WHICH ITS RIGHT AND LEFT SIDE SUMMATION WILL BE SAME*/
         