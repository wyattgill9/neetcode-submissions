class Solution {
public:
    bool hasDuplicate(std::vector<int>& nums) {
        std::unordered_set<int> seen;
        seen.reserve(nums.size());

        for (int x : nums) {
            if (!seen.insert(x).second)
                return true;
        }

        return false;
    }
};