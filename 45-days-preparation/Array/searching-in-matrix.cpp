// Question => We have to search an element in the matrix
// Remember that this is matrix is 2D array

#include<iostream>
using namespace std;

int main(){
    int n,m;
    cout<<"Please enter the number of rows: ";
    cin>>n;
    cout<<"Please enter the number of columns :";
    cin>>m;

    // Declaring 2D array and taking input in that array
    int arr[n][m];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>arr[i][j];
        }
    }


    int k;
    cout<<"Please enter the elemet that you want to search.... ";
    cin>>k;

    // Finding the given element
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(arr[i][j] == k){
                cout<<"Element found !!!"<<endl;
                cout<<"Row = "<<i<<" & "<<"Column = "<<j;
            }
        }
    }
}