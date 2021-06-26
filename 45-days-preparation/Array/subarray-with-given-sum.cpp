/*
Problem => Given an unsorted array A of size N of non-negative integers, find a continuous subarray
which adds to a given number S.

Brute Force:
    @ Find sum of all possible subarryas, If any of the sum equates to S, output the starting
        and ending index of the Subarray.
    @ Time complexity: O(n^2)


*/

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Please enter the size of the array: ";
    cin>>n;

    int a[n];
    for(int i=0; i<n; i++){
        cout<<"Please enter the elements in the array: ";
        cin>>a[i];
    }

    int i=0, j=0, st=-1, en=-1, sum=0;

    while(j<n && sum+a[j] <= s){
        sum += a[j];
        j++;
    } 

    if(sum == s){
        cout<<i+1<<" "<<j<<endl;
        return 0;
    }

    while(j<n){
        sum += a[j];
        while(sum >s){
            sum -= a[i];
            i++;
        }

        if(sum == s){
            st = i+1;
            en = j+1;
            break;
        }
        j++;
    }

    cout<<st<<" "<<en<<endl;

    return 0;

}