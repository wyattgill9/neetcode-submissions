class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        size_t len = nums.size();
        std::unordered_set<int> a(nums.begin(), nums.end());
        if(a.size() < len) return true;
        return false;
    }
};