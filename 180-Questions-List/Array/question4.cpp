// Problem No. 04 => Kadane's Algorithm 

#include<iostream>
#include<climits>
using namespace std;

int main(){
    int arr[] = {-2,1,-3,4,-1,2,1,-5,4};
    int sum = 0;
    int maxi = INT_MIN;
    for(auto it : arr){
        sum += it;
        maxi = max(sum, maxi);
        if(sum < 0) sum = 0; 
    }

    cout<<"Maximum possible sum of subarray is = "<<maxi;
}

/*

1. First approach will be
    @ We will find all the subarrays of the given array.
    @ After finding all the subarray we will find the sum of all those subarrays, and the 
        subarray with the maximum sum will be our answer.
    @ Time complexity for this will be O(n^3), because we are running 3 loops.

2. The second and best approach includes "Kadane's Algorithm"
    @ Time complexity of this algorithm will be O(n)
    @ Space complexity will be O(1), becasue we are not using any extra space.

*/