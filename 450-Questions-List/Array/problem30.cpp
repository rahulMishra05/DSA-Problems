// Question 30 => Chocolate Distribution Problem

#include<iostream>
#include<algorithm>
#include<climits>
using namespace std;

int chocolateDistribution(int arr[], int n, int m){
    
    sort(arr, arr + n);
    
    int minDiff = INT_MAX;
    int sub = 0;

    for(int i=0; i+m-1<n; i++){
        sub = arr[i+m-1] - arr[i];
        minDiff= min(minDiff, sub);
    }

    return minDiff;
}

int main(){
    int arr[] = {3,4,1,9,56,7,9,12};
    int n = sizeof(arr) / sizeof(arr[0]);

    int m = 5;

    cout<<chocolateDistribution(arr, n, m);
}