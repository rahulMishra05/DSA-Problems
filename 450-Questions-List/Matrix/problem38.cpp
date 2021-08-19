// Question 38 => Search an element in a Matrix

/*
1. Brute force approach
    @ In this approach we will use two loops and check whether the element matches
        to the number that we are searching for.
    @ Time complexity of this approach will be 

2. In the optimal appraoch we will use two pointers.
    @ Time complexity of this approach will be O(n)
*/ 

#include<iostream>
using namespace std;

int main(){
    int n=4, m=4;
    int arr[n][m] = { {10, 20, 30, 40},
                      {15, 25, 35, 45},
                      {27, 29, 37, 48},
                      {32, 33, 39, 50}};

    int target;
    cout<<"Please enter the element that you want to search ? ";
    cin>>target;

    bool found = false;

    int start = 0, end = m-1;
    while(start < n && end >=0){
        if(arr[start][end] == target){
            found = true;
        }
        else if(arr[start][end] > target){
            end--;
        }
        else{
            start++;
        }
    }

    if(found){
        cout<<target<<" Is present in the Matrix....";
    }
    else{
        cout<<target<<" Is not present in the Matrix!!!";
    }
}