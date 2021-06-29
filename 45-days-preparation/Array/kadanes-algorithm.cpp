// Kadane's Algorithm => This algo is used to calculate the maximum sum of the subarray.
// this is the most optimised way to calcualte the sum of subarray.
// Time complexity in this approach is O(n)

#include<iostream>
#include<climits>
using namespace std;

int main(){
    int n;
    cout<<"Please enter the size of array: ";
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++){
        cout<<"Please entet the elements in the array: ";
        cin>>arr[i];
    }

    int currsum = 0;
    int maxSum = INT_MIN;

    for(int i=0; i<n; i++){
        currsum += arr[i];
        if(currsum < 0){
            currsum =0;
        }
        maxSum = max(maxSum, currsum);
    }

    cout<<maxSum;  
}