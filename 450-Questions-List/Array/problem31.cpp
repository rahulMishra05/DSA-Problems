// Question 31 => Smallest subarray with sum greater than a given value

#include<iostream>
#include<climits>
using namespace std;

int main(){
    int arr[] = {1,4,45,6,0,19};
    int n = sizeof(arr) / sizeof(arr[0]);

    int x;
    cout<<"Please enter any number (Value of x): ";
    cin>>x;

    int minValue = INT_MAX;

    for(int i=0; i<n; i++){
        int sum = 0;
        for(int j=i; j<n; j++){
            sum += arr[j];
            if(sum > x){
                minValue = min(minValue, j-i+1);               
            }
        }
    }

    cout<<minValue<<endl;
}