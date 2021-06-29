// Qestion => Check if there exists two elements in an array such that their sum is equal to given k

/*
Brute Force Approach

bool pairsum(int arr, int n, int k){
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n;j++){
            if(arr[i] + arr[j] == k){
                cout<<i<<" "<<j<<endl;
                return true;
            }
        }
    }

    return false;
}

Time complexity = O(n^2)
*/


// Suppose we have sorted array. if we do not have sorted array, then we will sort it first

#include<iostream>
#include<climits>
using namespace std;

bool pairsum(int arr[], int n, int k){
    int low= 0;
    int high = n-1;

    while(low<high){
        if(arr[low] + arr[high] == k){
            cout<<low<<" "<<high<<endl;
            return true;
        }
        else if(arr[low] + arr[high] < k){
            low++;
        }
        else if(arr[low] + arr[high] >k){
            high--;
        }
        else{
            return false;
        }
    }
}

int main(){
    // int n;
    // cout<<"Please enter the size of array: ";
    // cin>>n;

    // int k;
    // cout<<"Please enter the key: ";
    // cin>>k;

    // int arr[8];
    // for(int i=0; i<8; i++){
    //     cout<<"Please enter the elements in the array: ";
    //     cin>>arr[i];
    // }

    int arr[] = {2,4,7,11,14,16,20,21};
    int k=31;


    cout<<pairsum(arr, 8, k)<<endl;
    
}

