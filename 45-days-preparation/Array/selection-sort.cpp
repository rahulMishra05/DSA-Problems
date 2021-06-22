// Sorting an array using selection sort.
#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Please enter the size of the array: ";
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"Please enter elements in the array: ";
        cin>>arr[i];
    }

    // Now sorting the array
    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            if(arr[j]<arr[i]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    // Printing the sorted array
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}