#include<bits/stdc++.h>  //Preprocessor derivative header file
using namespace std;        //Using decleration 

int main(){             //main function decleration
    
    int t,q;            //variable t for time and q for the total questions in contest
    cin>>q>>t;          //taking input
    t=240-t;            //as the progtam starts at 20:00 and run for 4 hour, the contest will run for 240 min. we take t as the time to reach the party, so we have 240-t min to solve questions in cintest

    int arr[q];         //decleration of aray for storing the time needed for each q
    arr[0]=5;            // first question need 5 min so we declared it first
    int k=2;                    //decleration of a variable which will be used to find the time cost for respected qesstion and its value is 2 as we starting count for secound qestion which is in the index number 1 in array
    for(int i=1;i<q;i++){           //loop for finding and storing the time cost
        arr[i]=(k*5)+arr[i-1];      //every question cost five times its number also the time needed for all previous question
        k++;                        //increment of variable k
    }

    int b=0,e=q-1,mid=floor((b+e)/2);   //variable b for begening, e for end and mid for middle positon for binary search
    while (b<=e && arr[mid]!=t)       //loop for binary search, will stop if biggening is bigger then end and if t found
    {
        if (arr[mid]>t){          //chechikng if elemnt of mid of array is bigger then t
            e=mid-1;                // if elemn t is bigger then b will remain same and e will move to left
        }else{                  //if t is not bvigger then e will remain same and b will move to right
            b=mid+1;            //changing the value of b to mid+1
        }

        mid=floor((b+e)/2);         //changning  the mid every time
            
    }
    if(arr[mid]==t){                //checking if t is found in array
        cout<<mid+1<<endl;          //as we sored time cost in array, the first index 0 is the time needed for 1 question, 2nd index 1 is the time neewde for 2 question. so we add one and print the index number
    }else if(b>e) cout<<b<<endl;    //if  t id not found in array, time t is in the range from b, so we print b as result which is the index number of t's nearest lowest value




    return 0;   //return nothing from main function
}


#include<bits/stdc++.h>     //Preprocessor derivative header file
using namespace std;        //Using decleration 

int main(){                 //main function decleration
    int i=1;                //decleration of variable i for tracking the total test case

    while(i<=65){           //loop for running the programm in under test case limit
        int n,q;              //n for array size, q for total questions
        cin>>n>>q;              //traking input of n and q
        
        if(n==0 && q==0) break;     //condition if n==0 and q==0, the progrum will stop running

        int arr[n],arr2[q];                 //decleration of array, in 1st array the number of marbel will stored and in 2nd array, questions will be stored
        for(int i=0;i<n;i++) cin>>arr[i];       //arary input
        sort(arr,arr+n);                        //sorting array
        for(int i=0;i<q;i++) cin>>arr2[i];      //second array input

        cout<<"CASE# "<<i<<":"<<endl;       //printing the test case number

        for(int i=0;i<q;i++)              //while loop for total test case
        {   
   
            int ans=-1,b=0,e=n-1,mid=floor((b+e)/2);   //variable b for begening, e for end and mid for middle positon for binary search
            while (b<=e){                                //loop for binary search, will stop if biggening is bigger then end
                if (arr[mid]==arr2[i]){          //cheking if elemnt of mid of array is equal to arr2[i]
                    ans=mid;                //if element found, storing the mid in ans variable
                   e=mid-1;               //to rechek for the first occurence, e is changing to run code and checking the first occurence 
                }else if(arr[mid]<arr2[i]){                  //if arr2[i] is not bigger, then e will remain same and b will move to right
                    b=mid+1;            //changing the value of b to mid+1
                }else e=mid-1;

                mid=floor((b+e)/2);         //changning  the mid every time
            }

            if(ans==-1)cout<<arr2[i]<<" not found"<<endl;                //printing if not found
            else cout<<arr2[i]<<" found at "<<ans+1<<endl;    //if found, printing the result
        }
        i++;        //incrementation of test case

    }

    return 0;       //returnming nothing
}