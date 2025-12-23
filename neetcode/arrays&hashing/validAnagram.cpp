#include <string>
#include <algorithm> 
#include <unordered_set>

// O(nlogn) - sort then check if they are equal
class Solution {
public:
    bool isAnagram(std::string s, std::string t) {
        std::sort(t.begin(), t.end()); 
        std::sort(s.begin(), s.end()); 
        return  (s == t); 
    }
};

class Solution {
public:
    bool isAnagram(std::string s, std::string t) {
        std::unordered_map<char, int> umap {}; 
        for (std::size_t i {}; i < s.size(); i++) {
            umap[s[i]]++; 
        } 
        for (std::size_t i {}; i < t.size(); i++) {
            umap[s[i]]--; 
        }

    }
};
