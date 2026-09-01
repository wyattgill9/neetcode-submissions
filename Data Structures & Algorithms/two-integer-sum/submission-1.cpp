class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // value, index
        std::unordered_map<int, int> map_;

        for(int i = 0; i < nums.size(); i++) {
            int comp = target - nums[i];
            if(map_.contains(comp)) {
                return {map_[comp], i};
            }
            map_[nums[i]] = i;
        }
        return {};
    }
};
