// Question 18 => Find all pairs on integer array whose sum is equal to given number

#include<bits/stdc++.h>
using namespace std;

int getSum1(int arr[], int n, int sum){
    int count = 0;


    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(arr[i] + arr[j] == sum){
                count++;
            }
        }
    }

    return count;

}

int getPairsCount(int arr[], int n, int sum){
    int count =0;

    unordered_map<int,int> m;

    for(int i=0; i<n; i++){
        int x = sum - arr[i];

        if(m[x] == 0){
            m[arr[i]]++;
        }
        else{
            count +=m[x];

            m[arr[i]]++;
        }
    }

    return count;
}

int main(){
    int arr[] = {1,5,7,-1};
    int n = sizeof(arr) / sizeof(arr[0]);

    int number = 6;
    
    cout<<getSum1(arr, n, number)<<endl;

    cout<<getPairsCount(arr, n, number);
    
}