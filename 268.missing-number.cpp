/*
 * @lc app=leetcode id=268 lang=cpp
 *
 * [268] Missing Number
 */

// @lc code=start
class Solution {
public:
    int missingNumber(vector<int>& nums) {

        auto len = nums.size();
        auto gauss_sum = len*(len+1)/2;
        auto vector_sum = std::accumulate(nums.begin(), nums.end(), 0);

        return gauss_sum-vector_sum;

    }
};
// @lc code=end

