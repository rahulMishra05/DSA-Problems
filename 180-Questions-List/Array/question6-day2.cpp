// Problem => Rotate Matrix (90 Degree In-Place)

#include<bits/stdc++.h>
using namespace std;

void rotate(vector<vector<int>>& m){
    // Transpose the matrix
    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
            swap(m[i][j], m[j][i]);
        }
    }

    for(int i=0; i<4; i++){
        reverse(m[i].begin(), m[i].end());
    }
}

int main(){
    int arr[4][4] = {{5,1,9,11},{2,4,8,10},{13,3,6,7},{15,14,12,16}};

    
    
}



/*
1. The first approach will be brute force by using another matrix
    @ We will place the row1 of first matrix into the last column of the new matrix.
    @ We will place the row2 of the first matrix into the sencond last column of the new matrix.
    @ Time complexity = O(n*n)
    @ Space complexity = O(n*n)

2. In the optimized approach we can do this thing 
    @ Find the transpose of the first matrix.
    @ Then reverse every row of the matrix
    @ Time complexity = O(n^2) + O(n^2)
    @ Space complexity = O(1)


*/