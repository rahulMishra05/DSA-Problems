// Question 23 => Maximum Product Subarray

#include<iostream>
using namespace std;

int maxSubarrayMultiplication(int arr[], int n){
    int result = arr[0];

    for(int i=0; i<n; i++){
        int mul = arr[i];

        for(int j =i+1; j<n; j++){
            result = max(result, mul);
            mul *= arr[j];
        }

        result = max(result, mul);
    }

    return   result;
}

int main(){
    int arr[] = {1,-2,-3,0,7,-8,-2};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout<<"Maximum subarray product is = "<<maxSubarrayMultiplication(arr, n)<<endl;

    return 0;
}