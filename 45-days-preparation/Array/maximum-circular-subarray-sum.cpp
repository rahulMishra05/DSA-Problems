// Problem => We have to calcualte the maximum sum of a circular subarray
// Max subarray sum = Total sum of array - Sum of non-contributing elements

#include<iostream>
#include<climits>
using namespace std;

int kadane(int arr[], int n){
    int currsum = 0; 
    int maxSum = INT_MIN;

    for(int i=0; i<n; i++){
        currsum += arr[i];
        if(currsum <0){
            currsum =0;
        }
        maxSum = max(maxSum, currsum);
    }

    return maxSum;
}

int main(){
    int n;
    cout<<"Please enter the size of array: ";
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++){
        cout<<"Please enter the elemets in the array: ";
        cin>>arr[i];
    }


    int wrapsum;
    int nonwrapsum;

    // Calculating nonwrapsum with kadane algorithm
    nonwrapsum=kadane(arr, n);

    // Calculating the wrapsum
    int totalsum = 0;
    for(int i=0; i<n; i++){
        totalsum += arr[i];

        // Reversing the sign of all the elements of the array
        arr[i] =-arr[i];
    }

    wrapsum = totalsum + kadane(arr, n);

    cout<<max(wrapsum, nonwrapsum)<<endl;

    return 0;
}