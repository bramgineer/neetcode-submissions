class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {

        int highest = -1;

        for (int i = arr.size() - 1; i >= 0; i--) {
            int temp = arr[i];
            arr[i] = highest;
            highest = max(temp, highest);
        }

        return arr;
    }
};