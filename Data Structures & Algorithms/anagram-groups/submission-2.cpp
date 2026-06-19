class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> map;

        for (auto s : strs) {
            string temp_s = s;
            sort(s.begin(), s.end());

            map[s].push_back(temp_s);

        }
        vector<vector<string>> result;
        
        for (auto m : map) {
            result.push_back(m.second);

        }

        
        return result;

        
        
    }
};
