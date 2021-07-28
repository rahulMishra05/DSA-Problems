// Problem => Pascal Triangle 

#include<iostream>
using namespace std;

int main(){
    int row, col, space, n, no;
    cout<<"Please enter number of rows: ";
    cin>>no;

    for(row = 0; row<no; row++){
        
        // Loop to print space 
        for(space=0; space< (no - row); space++){
            cout<<" ";
        }

        n=1;
        // Loop to print the values in the triangle
        for(col = 0; col <= row; col++){
            cout<<" "<<n;

            // Main formula 
            n = n*(row - col) / (col + 1);
        }
        cout<<endl;
    }

    return 0;

}



/*

## If we want to find the a particular element from the pascal triangle, suppose element
at 5,3 then in that case you can use this formula r-1 C c-1 => 5 C 2 =>  4x3/2x1 = 6
Time complexity = O(n)

## If you want to print a particular row of the Pascal Triangle

1. First create n dynamic vectors (which will be empty)
    @ After that we 

*/



// Optimizied Solution 

/*

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> r(numRows);
        
        for(int i=0; i < numRows; i++){
            r[i].resize(i+1);
            r[i][0] = r[i][i] = 1;
            
            for(int j=1; j < i; j++){
                r[i][j] = r[i-1][j-1] + r[i-1][j];
            }
        }
        
        return r;
    }
};


*/