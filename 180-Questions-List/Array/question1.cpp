// Problem No.1 => 1.	Sort an array of 0’s 1’s 2’s without using extra space or sorting algorithm

#include<iostream>
using namespace std;

void sort012(int a[], int arr_size){
    int lo = 0;
    int hi = arr_size - 1;
    int mid = 0;

    while(mid <= hi){
        switch(a[mid]){

            // If the element is 0
            case 0:
                swap(a[lo++], a[mid++]);
                break;

            // If the element is 1
            case 1:
                mid++;
                break;

            // If the element is 2
            case 2:
                swap(a[mid], a[hi--]);
                break;
        }
    }
}

void printArray(int arr[], int arr_size){
    for(int i =0; i<arr_size; i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[] = {0,1,2,1,0,2,1,0,2};
    int n = sizeof(arr) / sizeof(arr[0]);

    sort012(arr, n);

    cout<<"Solution will be ";

    printArray(arr, n);

    return 0;
}