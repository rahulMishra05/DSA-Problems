// Problem => Stock Buy and Sell.

/*
1. The first approach will be brute force approach and in that we will use two loops
    @ Time complexity will be => O(n*n)
    @ Space complexity will be => O(1)

2. In the optimized approach we will do single traversal and in that we will take a pointer
    and increment that pointer.
    @ Time complexity will be => O(n)
    @ Space complexity will be => O(1)


*/

class Solution {
public:
    int maxProfit(vector<int>& price) {
        int maxPro = 0;
        int minPrice = INT_MAX;
        
        for(int i=0; i<price.size(); i++){
            minPrice = min(minPrice, price[i]);
            maxPro = max(maxPro, price[i] - minPrice);
        }
        
        return maxPro;
    }
};