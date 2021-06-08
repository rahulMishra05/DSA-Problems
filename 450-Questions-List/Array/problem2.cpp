// Problem No. 2 => Find the maximum and minimum element in the array

#include <iostream>
#include <climits>
using namespace std;
 
int main(){
    int n;
    cout<<"Please enter the length of the array: ";
    cin>>n;

    int myarr[n];
    for(int i=0; i<n; i++){
        cout<<"Please enter the elements in the array: ";
        cin>>myarr[i];
    }

    int maxNo = INT_MIN;        // Minimum number possible
    int minNo = INT_MAX;        // Maximum number possible

    for(int i=0; i<n; i++){
        if(myarr[i]>maxNo){
            maxNo = myarr[i];
        }

        if(myarr[i]<minNo){
            minNo = myarr[i];
        }
    }

    cout<<"Maximum number in the array is: "<<maxNo<<endl;
    cout<<"Minimum number in the array is: "<<minNo<<endl;

    return 0;
}