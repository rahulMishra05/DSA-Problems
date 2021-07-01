/* Question => GIven two 2D arrays of size n1 x n2 and n2 x n3. Your 
task is to multiply these matrics and output the multiplied matrix.

Approach
1. Make a nested loop of order 3. In the outer loop iterate over rows of first
matrix and in the inner loop iterate over columns of second matrix.
2. Multiply rows of first matrix with columns of second matrix in the 
innermost loop and update in the answer matrix.
*/

#include<iostream>
using namespace std;

int main(){
    int n1, n2, n3;
    cout<<"Enter the value of n1: ";
    cin>>n1;
    cout<<"Enter the value of n2: ";
    cin>>n2;
    cout<<"Enter the value of n3: ";
    cin>>n3;

    int m1[n1][n2];
    int m2[n2][n3];

    for(int i=0; i<n1; i++){
        for(int j=0; j<n2; j++){
            cout<<"Enter the element in 1st matrix: ";
            cin>>m1[n1][n2];
        }
    }

    for(int i=0; i<n2; i++){
        for(int j=0; j<n3; j++){
            cout<<"Enter the element in 2nd matrix: ";
            cin>>m2[n2][n3];
        }
    }

    // Initializing the answer matrix with 0
    
    int ans[n1][n3];

    for(int i=0; i<n1; i++){
        for(int j=0; j<n3; j++){
            ans[i][j] = 0;
        }
    }

    // Multiplication 
    for(int i=0; i<n1; i++){
        for(int j=0; j<n3; j++){
            for(int k=0; k<n2; k++){
                ans[i][j] += m1[i][k] * m2[k][j];
            }
        }
    }

    // Printing the results
    for(int i=0; i<n1; i++){
        for(int j=0; j<n3; j++){
            cout<<ans[i][j]<<" ";
        }cout<<"\n";
    }

}