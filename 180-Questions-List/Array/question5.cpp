// Problem No. 05 => 1.	Merge Overlapping Subintervals

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


/*
1. First thing while solving this quesrion is that ask that, whether all the 
    intervals are in the sorted manner or not.

2. Our first approcah will be brute force approach in which we will first sort the array.
    @ After sorting the array, we will store the merged array in a new data structure, if we find an overlapping array.
    @ Time complexity for this approach will be O(nlog(n))
    @ Space complexity of this approach will be O(n^2)

3. In our second and optimised approach we will again sort the array.
    @ Now we will select the first array from the list of array, and compare that whether the second 
        array overlaps it, if yes than we merge them and continue.
    @ If No, than we put the selected array in new data structure and select the next array from the list, 
        and we will then repeat the same task, until we get desired answer.
    @ Time complexity for this approach will be O(nlog(n)) [For sorting the array] + O(n) [for lineraly tarversing through the array] 
    @ Space complexity will be O(n)
*/