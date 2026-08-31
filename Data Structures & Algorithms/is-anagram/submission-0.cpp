class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) return false;
        std::unordered_map<char, int> sol;

        for(int i = 0; i < s.size(); ++i) {
            sol[ s[i] ]++;
        }
        for(int i = 0; i < t.size(); ++i) {
            sol[ t[i] ]--;
        }
        for(auto const& [key, val] : sol) {
            if(val != 0) {
                return false;
            }
        }
        return true;
    }
};