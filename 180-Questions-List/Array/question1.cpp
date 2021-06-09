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


/*
Notes to solve this problem

1. First approach that we will follow will be brute force, in this we will sort the array, and thus desired results will be acheived. Time complexity of this solution is O(nlog(n)) and space complexity will be O(1)

2. Now we can optimize the solution using the counting sort algorithm. 
    @ In this approach we will traves through the array and count the number of 0's 1's and 2's.
    @ Once we have the counting we can run a loop to insert zeros at first 5 indexs and then we can insert 1 then 2.
    @ Therefore time conplexity for the first pass will be O(n) and for second pass O(n), total time complexity will be         O(2n)
3. This problem is a variation of Dutch National Flag Algorithm.

4. Time complexity using Dutch National Flag Algorithm will be O(n) and space complexity will be O(1)
*/