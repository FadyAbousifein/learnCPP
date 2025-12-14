#include <vector> 

// brute force solution: O(n^2) time, O(1) space 
class Solution1 {
public:
    bool hasDuplicate(std::vector<int>& nums) {
        for (std::size_t i = 0; i < nums.size(); i++) {
            for (std::size_t j = i + 1; j < nums.size(); j++) {
                if (nums[i] == nums[j]) {
                    return true;  
                } 
            } 
        } return false;
    }
};

class Solution2 {
public:
    bool hasDuplicate(std::vector<int>& nums) {
        for (std::size_t i = 0; i < nums.size(); i++) {
            for (std::size_t j = i + 1; j < nums.size(); j++) {
                if (nums[i] == nums[j]) {
                    return true;  
                } 
            } 
        } return false;
    }
};
