class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        std::unordered_map<int, int> map_;
        for(const auto& n : nums) {
            map_[n]++;
        }
        std::vector<std::pair<int, int>> flat_map_(map_.begin(), map_.end());

        std::sort(flat_map_.begin(), flat_map_.end(), [](const auto& a, const auto& b) {
            return a.second > b.second;
        });
        std::vector<int> res{};
        res.reserve(k);
        for(int i = 0; i < k; i++) {
            res.push_back(flat_map_[i].first);
        }
        return res;
    }
};
