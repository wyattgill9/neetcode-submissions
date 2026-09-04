class Solution {
public:
    string encode(vector<string>& strs) {
        std::string res{};
        for(const std::string& str : strs) {
            res += std::to_string(str.size());
            res += "#";
            res += str;
        }
        return res;
    }

    vector<string> decode(string s) {
        std::vector<std::string> res;

        int pos{0};
        while(pos < s.size()) {
            int divider_pos = s.find("#", pos);
            int word_size = std::stoi(s.substr(pos, divider_pos - pos));
            res.push_back(s.substr(divider_pos + 1, word_size));
            pos = divider_pos + word_size + 1;
        }
        return res;
    }
};
