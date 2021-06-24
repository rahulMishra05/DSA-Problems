// Problem => Max till I
#include<iostream>
using namespace std;

int main(){
    int arr[] = {0,-9,4,7,3,9};
    int n = sizeof(arr) / sizeof(arr[0]);

    // This variable will store the maximum value till I
    int mx=0;
    for(int i=0; i<n; i++){
        mx = max(mx, arr[i]);
        cout<<"Maximum till now is: "<<mx<<endl;
    }
}