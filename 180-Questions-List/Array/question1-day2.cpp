// Problem No. 01 DAY - 02  => Set Matrix Zeros

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int col0 = 1, rows = matrix.size(), cols = matrix[0].size();
        
        for(int i = 0; i < rows; i++){
            if(matrix[i][0] == 0) col0 = 0;
            for(int j = 1; j < cols; j++)
                if(matrix[i][j] == 0)
                    matrix[i][0] = matrix[0][j] = 0;
        }
        
        for(int i = rows - 1; i >= 0; i--){
            for(int j = cols - 1; j >= 1; j--)
                if(matrix[i][0] == 0 || matrix[0][j] == 0)
                    matrix[i][j] = 0;
            if(col0 == 0) matrix[i][0] = 0;
        }
    }
};

/*

1. First approach will be a brute force approach, suppose that there is no negative element in the matrix.
    @ We will traverse the array, and when ever we find a 0, we will change all the element of that 0's row and column to -1.
        We do not change any 0 if present in the row or cloums of the first 0 that we found.
        Because that other 0 may affect the values at some other places.
    @ After traversing the array and chainging the cloumn and rows values to 0 to -1
    @ We will traverse the array again and this repace -1 with 0.
    @ Time complexity will be O(nxm) + O(n+m)
    @ And space complexity will be O(1)

2. 

*/