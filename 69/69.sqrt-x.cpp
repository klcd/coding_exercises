/*
 * @lc app=leetcode id=69 lang=cpp
 *
 * [69] Sqrt(x)
 */

// @lc code=start

class Solution {
public:


    int mySqrt(unsigned int x) {

        //avoid division by 0
        if(not x) return x;
        
        unsigned int r = x;
        //condition avoids overflow
        while (r > x/r)
            r = (r + x/r) / 2;
        return r;
        
    }
};
// @lc code=end

