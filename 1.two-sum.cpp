/*
 * @lc app=leetcode id=1 lang=cpp
 *
 * [1] Two Sum
 */

// @lc code=start
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        std::unordered_map<int, int> seen;
        
        for( int ind{0}; ind<nums.size(); ind++){
            
            if( seen.find(nums[ind]) != seen.end()){
                return {seen[nums[ind]], ind };
            }
        
            seen[target-nums[ind]] = ind;
        }

        return {};
    }
};
// @lc code=end

