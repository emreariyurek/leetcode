class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int idx = 1;
        for (const auto &num : arr) {
            while (idx != num) {
                k--;
                if (k == 0)
                    return idx;
                idx++;
            }
            idx++;
        }
        
        return arr.back() + k;
    }
};