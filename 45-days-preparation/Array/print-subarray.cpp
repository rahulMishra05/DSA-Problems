// Question => Print all the possible subarray

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Please enter the size of array: ";
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++){
        cout<<"Please enter elements in the array: ";
        cin>>arr[i];
    }

    // Printing all the array
    for(int i=0; i<n; i++){
        for(int j=i; j<n; j++){
            for(int k=i; k<=j; k++){
                cout<<arr[k]<<" ";
            }cout<<endl;
        }
    }
}