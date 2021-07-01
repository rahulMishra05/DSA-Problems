/*
Question => Given a square martix A and its numbers of rows (or columns) N,
return the transpose of A.
The transpose of a matrix is the matrix flipped over it's main
diagonals, swithching the row and column indices of the matrix.


Suppose in the original matrix 2 is present at (0,1) then in the transposed matrix it will come 
at (1,0) position.  Which means that (row, cloumn) = (column, row)

So we swap (row, cloumn) with (column, row) then we will get the desired answer
But we will only swap the elements of the uper triangle, or else we will get the same matrix again.
*/

#include<iostream>
using namespace std;

int main(){
    int A[3][3] = {{1,2,3}, {4,5,6}, {7,8,9}};

    for(int i=0; i<3; i++){
        for(int j=i; j<3; j++){
            // Swap
            int temp = A[i][j];
            A[i][j] = A[j][i];
            A[j][i] = temp;
        }
    }

    // Print 
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout<<A[i][j] <<" ";
        }
        cout<<"\n";
    }

    return 0;
}
