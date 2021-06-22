// Finding an element in the array using linera search.
#include<iostream>
using namespace std;

int linearSearch(int arr[], int n, int key){
    for(int i=0; i<n; i++){
        if(arr[i]==key){
            return i;
        }
    }

    return -1;
}

int main(){
    int n;
    cout<<"Please enter the size of the array: ";
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++){
        cout<<"Please enter elements in the array: ";
        cin>>arr[i];
    }

    int key;
    cout<<"Please enter the number you want to find in array: ";
    cin>>key;

    cout<<linearSearch(arr, n, key);
}