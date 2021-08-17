// Question 28 => Find a triplet that sum to a given value

#include<iostream>
#include<algorithm>
using namespace std;

bool findTriplet(int arr[], int n, int sum){
    int l, r;

    sort(arr, arr + n);

    for(int i=0; i<n-2; i++){
        l = i+1;

        r = n -1;

        while(l < r){
            if(arr[i] + arr[l] + arr[r] == sum){
                cout<<arr[i]<<", "<<arr[l]<<", "<<arr[r];
                return true;
            }
            else if(arr[i] + arr[l] + arr[r] < sum){
                l++;
            }
            else{
                r--;
            }
        }
    }

    return false;
}

int main(){
    int arr[] = { 1, 4, 45, 6, 10, 8 };
    int sum = 22;
    int n = sizeof(arr) / sizeof(arr[0]);
 
    findTriplet(arr, n, sum);

    return 0;
}

/*
1. Time complexity of this approach will be O(n*n)

2. In brute force apprach we will use 3 nested loops and time complexity will be
    O(N^3)
*/ 