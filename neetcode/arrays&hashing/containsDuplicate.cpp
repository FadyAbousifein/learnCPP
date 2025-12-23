#include <algorithm>
#include <iterator>
#include <unordered_map>
#include <vector>

// O(n^2) - Brute force solution 
class Solution {
    public:
        bool hasDuplicate(std::vector<int>& nums) {
            for (std::size_t i{}; i < nums.size(); i++) {
                for (std::size_t j{i+1}; j < nums.size(); j++) {
                    if (nums[i] == nums[j]) {
                        return true;  
                    } 
                } 
            } return false; 
        }
}; 

// O(nlogn) - Sort then double pointer 
class Solution {
    public:
        bool hasDuplicate(std::vector<int>& nums) {
            std::sort(nums.begin(), nums.end()); 
            std::size_t i {}; 
            for (std::size_t j {i+1}; j < nums.size(); j++, i++)  {
                if (nums[i] == nums[j]) {
                   return true;  
                }
            } return false; 
        }
}; 

// O(n) - Hash set contains only unique keys
class Solution {
    public:
        bool hasDuplicate(std::vector<int>& nums) {
            std::unordered_set<int> uset {}; 
            for (std::size_t i {}; i < nums.size(); i++) {
                if (uset.count(nums[i])) return true; 
                else uset.insert(nums[i]);  
            } return false; 
        }
}; 
