#include <cinttypes>
#include <vector> 


// O(n^2) - Brute Force solution 
class Solution {
public:
    std::vector<int> twoSum(std::vector<int>& nums, int target) {
       for (std::size_t i {}; i < nums.size(); i++) {
           for (std::size_t j {i+1}; j < nums.size(); j++) {
               if (nums[i] + nums[j] == target) {
                    return {static_cast<int>(i), static_cast<int>(j)};      
               }  
           }
       }  return {-1,-1}; 
    }
};

class Solution {
public:
    std::vector<int> twoSum(std::vector<int>& nums, int target) {
        std::unordered_set<int> uset {}; 
        for (std::size_t i {} i < nums.size(); i++) {
            uset.insert(nums[i]);  
        }
    }
};


