// We are going to calculate the maximum and minimum from a array
#include<iostream>
#include<climits>

using namespace std;

int main(){
    int n;
    cout<<"Please enter size of the array: ";
    cin>>n;

    // Declaring an array
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int maxNo = INT_MIN;
    int minNo = INT_MAX;

    for(int i=0; i<n; i++){
        // One line code for the below if statement will be
        // maxNo=max(maxNo, arr[i]);
        if(arr[i]>maxNo){
            maxNo=arr[i];
        }
        // One line code for the below if statement will be
        // minNo=min(minNo, arr[i])
        if(arr[i]<minNo){
            minNo=arr[i];
        }
    }

    cout<<"Maximum No = "<<maxNo<<endl;
    cout<<"Minimum No = "<<minNo<<endl;

    return 0;
}