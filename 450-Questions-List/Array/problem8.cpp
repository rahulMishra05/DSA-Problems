// Find the sum of largest contiguous subarray

// We will solve this problem with the help of Kadane's Algorithm

#include<iostream>
#include<climits>

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

    // Now we are going to apply Kadane's algo

    int currsum = 0;
    int maxSum = INT_MIN;

    for(int i=0; i++; i<n){
        currsum += arr[i];
        if(currsum < 0){
            currsum = 0;
        }

        maxSum = max(maxSum, currsum);
    }

    cout<<"Maximum sum = "<<maxSum;



}