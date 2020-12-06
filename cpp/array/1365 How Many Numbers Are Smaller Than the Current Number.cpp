class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        auto copy = nums;
        sort(copy.begin(), copy.end());
        
        map<int, int> m;
        for (int i = 0; i < copy.size(); i++) {
            int num = copy[i];
            if (m.find(num) == m.end())
                m[num] = i;
        }
        
        vector<int> ans;
        for (const auto &num : nums)
            ans.push_back(m[num]);
        
        return ans;
    }
};