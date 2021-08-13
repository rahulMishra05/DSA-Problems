// Question 24 => Find the longest consecutive subsequence

/*
1. The brute force approach will be
    @ First we sort the array and then we will find the longest subsequence in the array.
    @ Time complexity = O(n(logn))

2. In the optimnal approach we will use a hashmap
*/

    int longestConsecutive(vector<int>& nums) {
        set<int> hashSet;
        for(int num : nums){
            hashSet.insert(num);
        }
        
        int longestStreak = 0;
        
        for(int num : nums){
            if(!hashSet.count(num - 1)){
                int currentNum = num;
                int currentStreak = 1;
                
                while(hashSet.count(currentNum + 1)){
                    currentNum += 1;
                    currentStreak += 1;
                }
                
                longestStreak = max(longestStreak, currentStreak);
            }
        }
        
        return longestStreak;
    }

    