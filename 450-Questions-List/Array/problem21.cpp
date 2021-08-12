// Question 21 => Find if there is any subarray with sum equal to zero

#include<iostream>
using namespace std;

int main(){
   int arr[] = {4,2,-3,1,6};
   int n = sizeof(arr) / sizeof(arr[0]);

    int sum = 0;
    bool result = false;

   for(int i=0; i<n; i++){
       for(int j=i; j<n; j++){
           for(int k = i; k<j; k++){
               sum += arr[k];
                   cout<<sum<<endl;
               if(sum == 0){
                   result = true;
               }
           }
       }
   }

    if(result){
        cout<<"Yes.............";
    }
    else{
        cout<<"No!!!!!!!!!!";
    }

    return 0;
}