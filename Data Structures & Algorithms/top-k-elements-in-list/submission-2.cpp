class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {

        unordered_map<int,int> freq_map;

        for (int n : nums) {
            freq_map[n]++;
        }

        vector<pair<int,int>> arr;

        for (auto& [num, count] : freq_map) {
            arr.push_back({num, count});
        }
        sort(arr.begin(), arr.end(), [](const auto& a, const auto& b) {
            return a.second > b.second;
        });
        
        vector<int> result;

        for (int i = 0; i < k; i++) {
            result.push_back(arr[i].first);
        }

        return result;
        
    }
};
