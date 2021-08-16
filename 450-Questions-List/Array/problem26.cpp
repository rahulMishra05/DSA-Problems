// Question 26 => Maximum Profit by Buying and Selling a Share atmost twice

#include<iostream>
#include<climits>
using namespace std;

int  main(){
    int arr[] = { 2, 30, 15, 10, 8, 25, 80 };
    int n = sizeof(arr) / sizeof(arr[0]);

    int profit = 0;

    for(int i=1; i<n; i++){
        int sub = arr[i] - arr[i-1];
        if(sub > 0){
            profit += sub;
        }
    }

    cout<<"Profit = "<<profit<<endl;

    return 0;
}