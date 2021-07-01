/* Question => Given a nxm matrix
Write an algorithm to find that the given value exists in the matrix or not.
Integers in each row are sorted in ascending from left to right.
Intergrs in each column are sorted in ascending from top to bottom.

Brute force approach to solve this will be by doing a linear search and searching 
all the elements in the array. Time complexity will be O(nm)

Sudo code of better approach
Start from top right element.
You are at (r,c)
    if (matrix[r][c] == target)
        return true
    if (matrix[r][c] > target)
        c--
    else
        r++;
*/
#include<iostream>
using namespace std;

int main(){
    int n,m;
    cout<<"Please enter the row number of matrix: ";
    cin>>n;
    cout<<"Please enter the columns number of matrix: ";
    cin>>m;

    int target;
    cout<<"Please enter the element you want to find..";
    cin>>target;

    int mat[n][m];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout<<"Please enter the elements in the array: ";
            cin>>mat[i][j];
        }
    }

    int r = 0, c = m-1;
    bool found = false;
    while(r < n and c >= 0){
        if(mat[r][c] == target){
            found = true;
        }
        if(mat[r][c] > target){
            c--;
        }
        else{
            r++;
        }
    }

    if(found){
        cout<<"Element found..";
    }
    else{
        cout<<"Element does not exist !!";
    }
}

