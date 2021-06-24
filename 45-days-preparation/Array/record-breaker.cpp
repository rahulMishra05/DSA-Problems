/*
Isyana is given the number of visitors at her local theme park on N consecutive days. The 
number of visitors on the i-th day is V. A day is record breaking if it satisfies both of the 
following conditions:
    @ The number of visitors on the day is strictly larger than the number of visitors on each
        of the previous day.
    @ Either it is the last day, or the number of visitors on the day is strictly larger than the 
        numbers of visitors on the following day.

Note that the very first day could be a record breaking day!

Please help Isayana find out the number of record breaking days.
*/

// Brute force approach will be to iterate over the array, and find the record breaking day
// In the optimised approach we will improve the first step of the previous approach, so we only have to iterate only once

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Please enter the size of array: ";
    cin>>n;

    int a[n+1];
    a[n] = -1;

    for(int i=0; i<n; i++){
        cout<<"Please enter elements in the array: ";
        cin>>a[i];
    }

    if(n==1){
        cout<<"1"<<endl;
        return 0;
    }

    int ans = 0;
    int mx = -1;

    for(int i=0; i<n; i++){
        if(a[i]>mx && a[i]>a[i+1]){
            ans++;
        }
        mx = max(mx, a[i]);
    }

    cout<<"Total number of record breaking days = "<<ans<<endl;
}