class Solution {
    struct VectorHash {
        size_t operator()(const std::array<int, 26>& a) const noexcept {
            std::size_t h = 0;
            for(auto x : a) {
                h = h * 31 + x;
            }
            return h;
        }
    };

public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        std::unordered_map<std::array<int, 26>, std::vector<std::string>, VectorHash> map_;

        for(const auto& s : strs) {
            std::array<int, 26> freq{};
            for(char c : s) {
                freq[c - 'a']++;
            }
            map_[freq].push_back(s);
        }
        std::vector<std::vector<std::string>> strings;
        strings.reserve(map_.size());

        for(const auto& pair : map_) {
            strings.push_back(std::move(pair.second));
        }
        return strings;
    }
};
