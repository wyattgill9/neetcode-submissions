class Solution {
public:

    // [bytes for first string] [first string] [bytes for second string] [second string] ect

    string encode(vector<string>& strs) {
        std::string res{};
        for(const std::string& s : strs) {
            res += std::to_string(s.size());
            res += "#";
            res += s;
        } 
        return res;
    }

    vector<string> decode(string s) {
        std::vector<std::string> strs{};
        int pos{0};

        while(pos < s.size()) {
            std::size_t del_pos = s.find('#', pos);
            std::size_t word_len = std::stoi(s.substr(pos, del_pos - pos));
            strs.push_back(s.substr(del_pos + 1, word_len));
            pos = del_pos + word_len + 1;
        }
        return strs;
    }
};
