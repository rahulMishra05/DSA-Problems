// Problem No. 3 => Find the "Kth" max and min element of an array 

#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Please enter the size of the array: ";
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++){
        cout<<"Please enter elements in the array: ";
        cin>>arr[i];
    }

    // Srting the array
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(arr[j]<arr[i]){
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }

    int k;
    cout<<"Please enter the value of k: ";
    cin>>k;

    // Now printing the Kth smallest number
    cout<<arr[k-1]<<endl;

    // Now printing the Kth largets number
    cout<<arr[n-(k)];
}