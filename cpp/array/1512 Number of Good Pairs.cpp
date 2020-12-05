class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        map<int, int> m;
        for (const auto &num : nums)
            m[num]++;
        
        int ans = 0;
        for (const auto &[num, count] : m) {
            if (count > 1)
                ans += (count * (count - 1) / 2);
        }
        
        return ans;
    }
};