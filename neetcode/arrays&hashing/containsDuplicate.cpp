#include <algorithm>
#include <unordered_set>
#include <vector>

// O(n^2) - Brute Force Solution
class Solution1 {
public:
    bool containsDuplicate(std::vector<int>& nums) {
       for (std::size_t i {}; i < nums.size() - 1; i++) {
            for (std::size_t j {i + 1}; j < nums.size(); j++)  {
                if (nums[i] == nums[j]) return true; 
            }
       } return false; 
    }
};

// O(nlogn) - Sorted Solution 
class Solution2 {
public:
    bool containsDuplicate(std::vector<int>& nums) {
        std::sort(nums.begin(), nums.end());
        for (std::size_t i {}, j {i + 1}; i < nums.size() - 1; i++, j++) {
            if (nums[i] == nums[j]) return true; 
        } return false; 

    }
};

// O(n) - Hash set Solution 
class Solution3 {
public:
    bool containsDuplicate(std::vector<int>& nums) {
        std::unordered_set<int> uset {};  
        for (std::size_t i {}; i < nums.size(); i++)  {
            if (uset.count(nums[i]))  
                return true;  
            else uset.insert(nums[i]); 
        } return false; 
    }
};
