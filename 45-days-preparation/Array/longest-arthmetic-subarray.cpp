// Problem => We have to find the length of longest arithmetic array
#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Please enter the size of array: ";
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++){
        cout<<"Please enter elements in the array: ";
        cin>>arr[i];
    }

    int ans = 2;
    int pd = arr[1] - arr[0];
    int j=2;
    int curr = 2;

    while(j<n){

        if(pd == arr[j] - arr[j-1]){
            curr++;
        }
        else{
            pd = arr[j];
            curr =2;
        }
        ans = max(ans, curr);
        j++;
    }

    cout<<ans<<endl;

}




/* Intuition & Approach

1. Loop over the array and find the answer.
2. Maintain the following variables:
    @ Previous Common Difference (pd)
    @ Current Arithmetic Subarray (curr)
    @ Max arithmetic subarray length (ans)

*/