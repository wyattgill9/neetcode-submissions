class Solution {
public:
    bool isAnagram(string s, string t) {
        std::unordered_map<char, int> seen_;

        for(char i : s) {
            seen_[i]++;
        }
        for(char n : t) {
            seen_[n]--;
        } 
        for(int i{0}; i < seen_.size(); i++) {
            if(seen_[i] != 0) {
                return false;
            }
        }
        return true;
    }
};
