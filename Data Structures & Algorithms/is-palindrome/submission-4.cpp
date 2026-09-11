class Solution {
public:
    bool isPalindrome(string s) {
        std::size_t left = 0;
        std::size_t right = s.length();

        while(left < right) {
            while(!std::isalnum(s[left]) && left < right) {
                ++left;
            }

            while(!std::isalnum(s[right - 1]) && left < right) {
                --right;
            }

            if(left < right && std::tolower(s[left]) != std::tolower(s[right - 1])) {
                return false;
            }

            right--;
            left++;
        }
        return true;
    }
};
