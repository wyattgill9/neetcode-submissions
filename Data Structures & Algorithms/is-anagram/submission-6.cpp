class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()) {
            return false;
        }

        std::vector<int> seen_(26, 0);
        for(int i{0}; i < s.size(); i++) {
            seen_[s[i] - 'a']++;
            seen_[t[i] - 'a']--;
        }
        for(auto i : seen_) {
            if(i != 0) {
                return false;
            }
        }
        return true;
    }
};
