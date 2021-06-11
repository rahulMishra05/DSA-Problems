// Problem No. 06 => Find the duplicate in the 1+n array

#include<iostream>
using namespace std;

void sort(int arr[], int n){
    // First we will sort the array
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(arr[j]<arr[i]){
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }
}

void printSortedArray(int arr[], int n){
    // Print the soretd array
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void findDuplicate(int arr[], int n){
    for(int i=0; i<n; i++){
        if(arr[i] == arr[i+1]){
            cout<<"Duplicate element in the array is "<<arr[i];
        } else {
            continue;
        }
    }
}

int main(){
    int arr[] = {1,3,4,2,2,};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Sort the array
    sort(arr, n);
    
    // Print the sorted array
    printSortedArray(arr, n);

    // Now we will find the duplicate array
    findDuplicate(arr, n);

    return 0;
}

/*
1. I am trying it on my own, what I did, that first sort the array, 
    and then find for the duplicate number in the array.
    @ Time complexity for this approach is O(nlog(n))
    @ Sapce complexity for this approach is O(1)

2. Second approach that we can follow is that by declaring a frequency array of same lenght as the given array.
    @ Suppose the name of the array give is A1 and name of frequency array that we creaet is F1.
    @ F1 will have the same size as A1 has, but have 0 at all the positions.
    @ Now what will do, we will traverse the A1 array and suppose we find 2 at o index of A1, than
        we will update the 0 to 1 at the location of 2 in the F1 array.
    @ We will follow this approach till the time when we get a number in A1 whose vaule is already updated in F1.
        This will be our duplicate element.
    @ Time complexity of this approach will be O(n)
    @ Space complexity of this approach will be O(n)

3. The most optimal method uses linkedlist cycle method.
    @ Using the linkedlist cycle, we will create a cycle./
    @ After creating the cycle we will use the Tortoise method.
    @ Time complexity will be O(n)
    @ Space complexity will be O(1)    
*/

/*

THIS IS THE CODE OF MOST OPTIMAL SOLUTION FOR THIS PROBLEM



*/