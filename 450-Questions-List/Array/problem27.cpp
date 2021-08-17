// Question 27 => Find whether an array is a subset of another array

/*
1. Time complexity of the brute force approach will be O(N^2)

2. In the optimal approach we can use unorderd_set
    @ We are using unordered_set and not set becasue time complexity of set is O(log(n)),
        while time complexity of unordered set in best case is O(1)
    
*/
#include<bits/stdc++.h>
using namespace std;

// Time complexity by using this approach will be O(n*n)
// void findSubarray(int arr1[], int arr2[], int n1, int n2){
//     if(n1 < n2){
//         cout<<"arr2[] is not a subset of arr1[]"<<endl;
//     }

//     int count = 0;

//     for(int i=0; i<n2; i++){
//         for(int j=0; j<n1; j++){
//             if(arr2[i] == arr1[j]){
//                 count += 1;
//             }
//         }
//     }

//     bool flag = false;

//     if(count >= n2)
//         flag = true;
    

//     if(flag)
//         cout<<"arr2[] is subset of arr1[]";
//     else
//         cout<<"arr2[] is not a subset of arr1[]";

// }



// Time complexity of this approach will be O(n1 + n2)
void findSubArrayUnordered_set(int arr1[], int arr2[], int n1, int n2){
    unordered_set<int> s;

    // Insert elements of arr1 in the s unordered_set
    for(int i=0; i<n1; i++){
        s.insert(arr1[i]);
    }

    // Check size of s

    int size = s.size();

    // Now insert elements of arr2[] in s
    for(int i=0; i<n2; i++){
        s.insert(arr2[i]);
    }

    // Now after inserting the elements of arr2[] in s compare its size to previous size

    if(s.size() == size){
        cout<<"arr2[] is subset of arr1[]";
    }
    else{
        cout<<"arr2[] is not a subset of arr1[]";
    }
}

int main(){
    int arr1[] = {10, 5, 2, 23, 19};
    int arr2[] = {19, 5, 3};

    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int n2 = sizeof(arr2) / sizeof(arr2[0]);

    // findSubarray(arr1, arr2, n1, n2);

    findSubArrayUnordered_set(arr1, arr2, n1, n2);
    
}