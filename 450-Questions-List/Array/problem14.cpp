// Merge Intervals

/*
1. Our first approach will be brute force approach in which we will first sort the array.
    @ After sorting the array, we will store the merged array in a new data structure, if we find an overlaping array.
    @ Time complexity for this approach will be O(nlog(n))
    @ Space complexity of this approaach will be O(n^2)

2. In our second and optimised approach we will again sort the array.
    @ Now we will select the first array from the list of array, and compare that whether the second
        arrya overlaps it, if yes then we merge them and continue.
    @ If NO, then we put the selected array in new data structure and select the next array from the list
        and we will then repeat the same task, until we get desired answer.
    @ Time complexity for this approach will be O(nlog(n)) [For soring the array] + O(n)
        [For linearly traversing through the array]
    @ Space complexity will be O(n)
*/

class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> mergedIntervals;
        if(intervals.size() == 0){
            return mergedIntervals;
        }
        sort(intervals.begin(), intervals.end());
        vector<int> tempInterval = intervals[0];
        
        for(auto it : intervals){
            if(it[0] <= tempInterval[1]) {
                tempInterval[1] = max(it[1], tempInterval[1]);
            } else{
                mergedIntervals.push_back(tempInterval);
                tempInterval = it;
            }
        }
        mergedIntervals.push_back(tempInterval);
        return mergedIntervals;
    }
};