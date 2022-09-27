/*
 * @lc app=leetcode id=20 lang=cpp
 *
 * [20] Valid Parentheses
 */

// @lc code=start
class Solution {
public:

    inline static std::unordered_map<char, char> m_matchOpeningPar {{'(',')'}, {'[',']'}, {'{','}'}};
    inline static std::set<char> m_openingPar {'(', '[', '{'};
    inline static std::set<char> m_closingPar {')', ']', '}'};
    
    bool isValid(string str) {

        std::stack<char> parStack; 

        for (auto s : str){
            
            if(m_closingPar.count(s)){
                if(!parStack.empty() and m_matchOpeningPar[parStack.top()] == s){
                    parStack.pop();
                }else{
                    return false;
                }
            }

            if (m_openingPar.count(s)){
                 parStack.push(s);
            }
        }

        return parStack.size()==0;
    }
};
// @lc code=end

