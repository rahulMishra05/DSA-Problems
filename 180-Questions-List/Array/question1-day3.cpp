// Problem => Sort the 2D Matrix

/*
1. First approach will be a brute force approach, in that we will do a linera serch.
    @ Time complexity = O(n x m)

2. In the second approach we know that all the rows are in sorted order.
    @ In this case we can simply do a binary search on every row and in that way we can try to find the element.
    @ Time complexity will be = O(n) + O(n log(n))

3. The best approach will be when all the rows and columns are present in sorted order.
    @ Now we will compare our element from the m position in the arr[n][m] matrix.

*/

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        if(!matrix.size()) 
            return false;
        
        int n = matrix.size();
        int m = matrix[0].size();
        
        int lo = 0;
        int hi = (n * m) - 1;
        
        while(lo <= hi){
            int mid = (lo + (hi - lo) / 2);
            if(matrix[mid/m][mid%m] == target){
                return true;
            }
            if(matrix[mid/m][mid%m] < target){
                lo = mid + 1;
            }
            else{
                hi = mid - 1;
            }
        }
        return false;
    }
};
