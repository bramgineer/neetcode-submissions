class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size()) return false;

        std::map<char, int> mp;

        for (char c : s) {
            mp[c]++;
        }
        
        for (char c : t) {
            if (mp.find(c) == mp.end()) return false;
            mp[c]--;
        }

        for (const auto& [character, count] : mp) {
            if (count != 0) {
                return false;
            }
        }

        return true;
    }
};
