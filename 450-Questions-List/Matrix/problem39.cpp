// Question 39 => Find median of row wise sorted martix

#include<bits/stdc++.h>
// #include<iostream>
// #include<climits>
using namespace std;

const int MAX = 100;

int median(int arr[], int n, int m){
    int min = INT_MAX, max = INT_MIN;
    for(int i=0; i<n; i++){

        // Finding minimum element
        if(m[i][0] < min)
            min = m[i][0];

        // Finding maximun element
        if(m[i][c-1] > max)
            max = m[i][c-1];
    }

    int desired = (n * m + 1)/2;
    while(min < max){
        int mid = min + (max - min) / 2;
        int place = 0;

        // Find count of elements smaller than mid
        for(int i=0; i<n; i++)
            place += upper_bound(m[i], m[i]+c, mid) - m[i];
        if(place < desired)
            min = mid + 1;
        else
            max = mid;
        }
    return mid;
}

int main(){
    int n = 3, m = 3;
    int arr[][MAX] = { {1,3,5}, {2,6,9}, {3,6,9} };

    cout<<"Median is "<<median(arr, n,m)<<endl;

    return 0;
}