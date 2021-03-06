// Question 32 => Three way partitioning of an array around a given value

#include<iostream>
using namespace std;

void threeWayPartitioning(int arr[], int n, int lowVal, int highVal){
    int start = 0;
    int end = n-1;

    for(int i=0; i<=end;){
        if(arr[i] < lowVal){
            swap(arr[i++], arr[start++]);
        }
        else if(arr[i] > highVal){
            swap(arr[i], arr[end--]);
        }
        else{
            i++;
        }
    }
}

int main(){
    int arr[] = {1, 14, 5, 20, 4, 2, 54, 20, 87, 98, 3, 1, 32};
    int n = sizeof(arr) / sizeof(arr[0]);

    int lowVal = 10;
    int highVal = 20;

    threeWayPartitioning(arr, n, lowVal, highVal);

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}