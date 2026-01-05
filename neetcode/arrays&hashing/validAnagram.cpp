#include <array>
#include <string> 
#include <unordered_map>
#include <algorithm>

// O(n) - Hashmap Solution
class Solution1 {
public:
    bool isAnagram(std::string s, std::string t) {
        if (s.size() != t.size()) return false; 
        std::unordered_map<char, int> umap {}; 
        for (std::size_t i {}; i < s.size(); i++) {
            umap[s[i]]++; 
        }
        for (std::size_t i {}; i < t.size(); i++) {
            if (--umap[t[i]] < 0) return false; 
        }
        return true; 

    }
};

// O(nlogn) - Sort Solution
class Solution2 {
public:
    bool isAnagram(std::string s, std::string t) {
        std::sort(s.begin(), s.end()); 
        std::sort(t.begin(), t.end()); 

        return s == t; 

    }
};

// O(n) - array solution  
class Solution3 {
public:
    bool isAnagram(std::string s, std::string t) {
        if (s.size() != t.size()) return false; 
        std::array<int, 26> count {};  
        for (std::size_t i {}; i < s.length(); i++) {
            count[s[i] - 'a']++; 
        }
        for (std::size_t i {}; i <t.length(); i++) {
            if (--(count[t[i] - 'a']) < 0) return false; 
        }
        return true; 
    }
};
