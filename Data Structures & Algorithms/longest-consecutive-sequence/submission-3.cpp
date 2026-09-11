class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int longest{0};
        std::unordered_set<int> set(nums.begin(), nums.end());

        for(const auto& num : nums) {
            if(!set.contains(num - 1)) {
                int current{num};
                int len{1};
                while(set.contains(current + 1)) {
                    current++;
                    len++;
                }
                longest = std::max(len, longest);
            }
        }

        return longest;
    }
};
