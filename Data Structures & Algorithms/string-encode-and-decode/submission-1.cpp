class Solution {
public:

    string encode(vector<string>& strs) {
        string result;

        for (int i = 0; i < strs.size(); i++) {
            result += to_string(strs[i].size());
            result += '#';
            result += strs[i];
        }

        return result;
    }

    vector<string> decode(string s) {

        vector<string> result;
        int i = 0;
        while (i < s.size()) {
            
            int j = i;
            while(s[j] != '#') j++;

            int len = stoi(s.substr(i, j - i));
            i = j + 1;
            result.push_back(s.substr(i, len));
            i += len;
            
        }

        return result;
    }
};
