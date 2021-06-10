// Problem No. 3 => Merge two sorted array without any extra space.

#include<iostream>
using namespace std;

void merge(int arr1[], int arr2[], int n1, int n2){
    for(int i=0; i<n1; i++){
        if(arr1[i] > arr2[0]){
            swap(arr1[i], arr2[0]);
            int first = arr2[0];

            // Sorting the A2 array
            int k;
            for(k=1; k < n2 && arr2[k] < first; k++){
                arr2[k-1] = arr2[k];
            }

            arr2[k-1] = first;
        }
    }
}

void printArray(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int arr1[] = {1,4,7,8,10};
    int arr2[] = {2,3,9};

    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int n2 = sizeof(arr2) / sizeof(arr2[0]);

    merge(arr1, arr2, n1, n2);

    printArray(arr1, n1);
    printArray(arr2, n2);

    return 0;
}


/*
Notes to solve this problem

1. This is going to be our first approach, in this approach we will use one more array.
    @ Lets assume that first array is A1, second array is A2 and we declare another array A3.
    @ Now what we will do, the size of A3 = sizeof(A1) + sizeof(A2)
    @ We will pull all the elements of A1 and A2 and place them in A3.
    @ Now we will sort the array A3.
    @ Suppose the size of A1 is 5 and size of A2 is 3, therefore size of A3 will be 8
    @ After sorting we will place first 5 elements of A3 into A1 and than the remaining 3 into A2.
    @ Time complexity of this will be O(nlog(n)) [for sorting] + O(n) [for pulling the data from A1 and A2 to A3] + O(n) [for putting elements back to A1 and A2 from A3]
    @ Sapce complexity will be O(n)

2. In the second approcah we do not need an extra array.
    @ Here we will compare the first element of A1 to first element of A2. If the A2 > A1 than we will swap them.
    @ After swaping A2 will become unsorted, so we have to sort it.
    @ After sorting A2, we will again apply the first step on the second element of A1 and A2.
    @ Time complexity of this approach will be O(n x m).
    @ Space complexity will be O(1)

3. Third approach could be using GAP algorithm.
    @ The time complecity of this method will be O(nlog(n))
    @ Space complexity will be O(1)
*/