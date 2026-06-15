class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> mp;

        for(string str : strs) {
            string og_string = str;
            sort(str.begin(), str.end());
            mp[str].push_back(og_string);
        

            

        }
        vector<vector<string>> result;

        for (const auto& [str_set, str_array] : mp) {
            result.push_back(str_array);
        }

        return result;

    }
};

/* Create map with set of characters and an array of strings
when finished iterating, add each second to an array of string arrays.
*/
