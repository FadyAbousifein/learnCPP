#include <vector> 
#include <unordered_map> 

// O(n^2) - Brute Force Solution
class Solution1 {
public:
    std::vector<int> twoSum(std::vector<int>& nums, int target) {
        for (std::size_t i {}; i < nums.size() - 1; i++) {
            for (std::size_t j {i + 1}; j < nums.size(); j++) {
                if (nums[i] + nums[j] == target) return {static_cast<int>(i), static_cast<int>(j)}; 
            }
        }        
        return {0,0}; 
    }
};

// O(n) - Hash Map  
class Solution2 {
public:
    std::vector<int> twoSum(std::vector<int>& nums, int target) { 
        std::unordered_map<int, int> umap {}; 
        for (std::size_t i {}; i < nums.size(); i++) {
            std::unordered_map<int,int>::iterator diff {umap.find(target - nums[i])};  
            if (diff != umap.end()) return {static_cast<int>(i), diff->second}; 
            else umap.insert({nums[i], i});  
        } return {-1, -1};  
    }
};
