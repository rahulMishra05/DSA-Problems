// Question => Find the duplicate in n+1 array

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Please enter the elements in the array: ";
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++){
        cout<<"Please enter elements in the array: ";
        cin>>arr[i];
    }


    int checker;
    // Finding duplicate
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(arr[i] == arr[j]){
                checker = arr[j];
            }
        }
        
    }
    
    cout<<checker;

    return 0;
}