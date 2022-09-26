/*
 * @lc app=leetcode id=733 lang=cpp
 *
 * [733] Flood Fill
 */

// @lc code=start
class Solution {
public:


    bool shouldStopp(vector<vector<int>>& image, const int x, const int y, const int old_color){

        //Check if inside image 
        bool cond = (0<=x and x < image.size()) and (0<=y and y < image[0].size());

        //Check if actually a field to continue
        if (cond){
            cond = cond and (old_color == image[x][y]);
        }
        return !cond;
    }

    void step (vector<vector<int>>& image, int x, int y, const int old_color, int color) {
        
        if (shouldStopp(image, x, y, old_color)) return;

        //if (image[x][y] == old_color){
            image[x][y] = color;
            step(image, x+1, y, old_color, color);
            step(image, x-1, y, old_color, color);
            step(image, x, y+1, old_color, color);
            step(image, x, y-1, old_color, color);
        //}
        
        return;
    }

    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {

        const int old_color = image[sr][sc];

        if (old_color != color){
            step(image, sr, sc, old_color, color);
        }
        return image;
    }
};
// @lc code=end

