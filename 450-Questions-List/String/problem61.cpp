// Question 61 => Find the next greater number with same set if digit

#include<bits/stdc++.h>
using namespace std;

vector<int> nextPermutation(vector<int> arr, int n){
    if(n == 1){
        return arr;
    }

    int i=0;
    for(int i = n-1; i > 0; i--){
        if(arr[i] > arr[i-1]){
            break;
        }
    }

    if(i!=0){
        for(int j=n-1; j >= i; j--){
            if(arr[i-1] < arr[j]){
                swap(arr[i-1], arr[j]);
                break;
            }
        }
    }

    reverse(arr.begin()+1, arr.end());

    return arr;
}

int main(){
    int n = 6;
    vector<int> v{5,3,4,9,7,6};
    vector<int> res;
    res = nextPermutation(v,n);
    for(int i=0; i<res.size(); i++){
        cout<<res[i];
    }
}