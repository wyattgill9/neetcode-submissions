class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        std::unordered_set<int> set(nums.begin(), nums.end());
        int longest{0};

        for(const auto& num : nums) {
            if(!set.contains(num - 1)) {
                int num_consecutive{1};
                int cur{num};
                while(set.contains(cur + 1)) {
                    num_consecutive++;
                    cur++;
                }

                longest = std::max(num_consecutive, longest);
            }
        }

        return longest;
    }
};
