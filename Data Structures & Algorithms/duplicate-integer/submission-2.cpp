class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        std::unordered_map<int, int> map_;
        for(int i : nums) {
            if(map_.contains(i)) {
                return true;
            }
            map_[i]++;
        }
        return false;
    }
};