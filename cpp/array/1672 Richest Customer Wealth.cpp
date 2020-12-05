class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int ans = 0;
        for (const auto &customer : accounts) {
            int sum = std::accumulate(customer.begin(), customer.end(), 0);
            ans = std::max(ans, sum);
        }
        
        return ans;
    }
};