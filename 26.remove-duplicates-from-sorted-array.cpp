/*
 * @lc app=leetcode id=26 lang=cpp
 *
 * [26] Remove Duplicates from Sorted Array
 */

// @lc code=start
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        

        if (!nums.size()) return 0;

        int insertPosition {1}; 

        for (size_t index = 1; index < nums.size(); index++){

            if (nums[index] != nums[insertPosition-1]){
                std::swap(nums[insertPosition], nums[index]);
                insertPosition++;
            }
        }

        //for (auto& n: nums) std::cout << n << " ";
        //std::cout << "\n";

        //std::cout << insertPosition << "\n";
        return insertPosition;


        
    }
};
// @lc code=end

