/*
 * @lc app=leetcode id=69 lang=cpp
 *
 * [69] Sqrt(x)
 */

// @lc code=start

class Solution {
public:
    int mySqrt(unsigned int x) {

        for (unsigned int i = 0; i<=x; i++){
            if (i*i>x){
                return i-1;
            } else if (i*i==x){
                return i;
            }
        }

        return 0;
    }
};
// @lc code=end

