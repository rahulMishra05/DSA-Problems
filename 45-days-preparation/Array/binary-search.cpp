// Searching an element in an array using binary search
#include<iostream>
using namespace std;

int binarySearch(int arr[], int n, int key){
    int s=0;
    int e=n;

    while(s<=e){
        int mid=(s+e)/2;

        if(arr[mid]==key){
            return mid;
        } 
        else if(arr[mid]>key){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
    }

    // If we do not find the element in the list
    return -1;
}

int main(){
    int n;
    cout<<"Please enter the size of the array: ";
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++){
        cout<<"Please enter the elements in the array: ";
        cin>>arr[i];
    }

    int key;
    cout<<"Please enter the element you want to find: ";
    cin>>key;

    cout<<binarySearch(arr, n, key)<<endl;

    return 0;
}