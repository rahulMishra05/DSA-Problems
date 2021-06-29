// Problem => Find the subarray that has maximum sum

/*
Brute Force approach will be look like this 

int maxSum=INT_MIN;
for(int i=0; i<n; i++){
    for(int j=i; j<n; j++){
        int sum=0;
        for(int k=i; k<=j; k++){
            sum +=arr[k];
        }
        maxSum = max(maxSum, sum);
    }
}

Time complexity of this approach will be O(n^3)
*/

#include<iostream>
#include<climits>
using namespace std;

int main(){
    int n;
    cout<<"Please enter the size of array: ";
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int currsum[n+1];
    currsum[0] = 0;

    for(int i=1; i<=n; i++){
        currsum[i] = currsum[i-1] + arr[i-1];
    }

    int maxSum = INT_MIN;
    for(int i=1; i<=n; i++){
        int sum = 0;
        for(int j=0; j<1; j++){
            sum = currsum[i] - currsum[j];
            maxSum = max(sum, maxSum);
        }
    }

    cout<<maxSum;

    return 0;
}